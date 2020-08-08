#include "pch.h"
#include "Utils.h"
#include "Cine.h"
#include "Constantes.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

char* Utils::strToCharPointer(const char* str)
{
	string texto = (string)str;
	int n = texto.length() + 1;
	char* cPointer = (char*)malloc(n * sizeof(char));
	strcpy_s(cPointer, n, texto.c_str());
	return cPointer;
}

Hora Utils::strToHora(const char* str)
{
	try
	{
		string texto = (string)str;
		int i = texto.find(":");
		int horas = atoi(texto.substr(0, i).c_str());
		texto = texto.substr(i + 1);
		i = texto.find(":");
		int min = atoi(texto.substr(0, i).c_str());
		texto = texto.substr(i + 1);
		int seg = atoi(texto.c_str());
		Hora h;
		h.setHoras(horas);
		h.setMinutos(min);
		h.setSegundos(seg);
		return h;
	}
	catch (exception e)
	{
		string error = "Error: ";
		error = error + e.what();
		Constantes::showMessage(error.c_str());
	}
}

Fecha Utils::strToFecha(const char* str)
{
	try
	{
		string texto = (string)str;
		int i = texto.find(":");
		int dia = atoi(texto.substr(0, i).c_str());
		texto = texto.substr(i + 1);
		i = texto.find(":");
		int mes = atoi(texto.substr(0, i).c_str());
		texto = texto.substr(i + 1);
		int anio = atoi(texto.substr(0, i).c_str());
		texto = texto.substr(i + 1);
		Hora h = strToHora(texto.c_str());
		Fecha f;
		f.setDia(dia);
		f.setMes(mes);
		f.setAnio(anio);
		f.setHora(h);
		return f;
	}
	catch (exception e)
	{
		string error = "Error: ";
		error = error + e.what();
		Constantes::showMessage(error.c_str());
	}
}

int* Utils::strToListId(const char* str, int tam, const char* separador)
{
	try
	{
		string texto = (string)str;
		string sub;
		int index;
		int* ids = (int*) malloc(tam * sizeof(int));
		for (int i = 0; i < tam; i++)
		{
			index = texto.find(separador);
			sub = index > 0 ? texto.substr(0, index) : texto;
			ids[i] = atoi(sub.c_str());
			texto = texto.substr(index + 1);
		}
		
		return ids;
	}
	catch (exception e)
	{
		string error = "Error: ";
		error = error + e.what();
		Constantes::showMessage(error.c_str());
	}
}

int Utils::getTamListStr(const char* str, const char* separador)
{
	string aux = (string)str;
	int count = 0, index;
	do
	{
		index = aux.find(separador);
		aux = index >= 0 ? aux.substr(index + 1) : "";
		count++;
	} while (index >= 0);
	return str == "" ? 0 : count;
}

void Utils::guardarCine(Cine* cine)
{
	ofstream escritura;
	escritura.open("cine.dat", ios::binary);
	escritura.write(reinterpret_cast<char*>(&cine), sizeof(Cine));
	escritura.close();
}

void Utils::abrirCine(Cine* cine)
{
	ifstream lectura;
	lectura.open("cine.dat", ios::binary);
	lectura.read(reinterpret_cast<char*>(&cine), sizeof(Cine));
	lectura.close();
}

TipoSala* Utils::getListaTipoSala()
{
	TipoSala* listaTipoSala = (TipoSala*)malloc(Constantes::TIPO_SALA_MAX * sizeof(TipoSala));
	ifstream lectura;
	string linea;
	lectura.open(Constantes::getTipoSalaTXT(), ios::in);
	if (!lectura.fail()) {
		int i, id;
		string nombre;
		string descripcion;
		float precio;
		int count = 0;
		while (!lectura.eof())
		{
			getline(lectura, linea);
			try
			{
				i = linea.find(",");
				id = atoi(linea.substr(0, i).c_str());
				listaTipoSala[count].setId(id);

				linea = linea.substr(i + 1);
				i = linea.find(",");
				nombre = linea.substr(0, i);
				listaTipoSala[count].setNombre(strToCharPointer(nombre.c_str()));

				linea = linea.substr(i + 1);
				i = linea.find(",");
				descripcion = linea.substr(0, i);
				listaTipoSala[count].setDescripcion(strToCharPointer(descripcion.c_str()));

				linea = linea.substr(i + 1);
				precio = atof(linea.c_str());
				listaTipoSala[count].setPrecioEntradaPersona(precio);
			}
			catch (exception e)
			{
				string error = "Error: ";
				error = error + e.what();
				Constantes::showMessage(error.c_str());
			}
			count++;
		}
	}
	lectura.close();
	return listaTipoSala;
}

TipoSala Utils::getTipoSala(TipoSala* lista, int id)
{
	TipoSala tipo;
	for (int i = 0; i < Constantes::TIPO_SALA_MAX; i++)
	{
		if (lista[i].getId() == id)
		{
			tipo.setId(lista[i].getId());
			tipo.setNombre(lista[i].getNombre());
			tipo.setDescripcion(lista[i].getDescripcion());
			tipo.setPrecioEntradaPersona(lista[i].getPrecioEntradaPersona());
			return tipo;
		}
	}
}

Sala* Utils::getListaSala()
{
	TipoSala* listaTipoSala = getListaTipoSala();
	Sala* listaSala = (Sala*)malloc(Constantes::SALAS_MAX * sizeof(Sala));
	ifstream lectura;
	string linea;
	lectura.open(Constantes::getSalaTXT(), ios::in);
	if (!lectura.fail()) {
		int i, id, capacidad, idTipoSala;
		char* butacasStr;
		TipoSala tipoSala;
		int count = 0;
		while (!lectura.eof())
		{
			getline(lectura, linea);
			try
			{
				i = linea.find(",");
				id = atoi(linea.substr(0, i).c_str());
				listaSala[count].setId(id);

				linea = linea.substr(i + 1);
				i = linea.find(",");
				capacidad = atoi(linea.substr(0, i).c_str());
				listaSala[count].setCapacidad(capacidad);

				linea = linea.substr(i + 1);
				i = linea.find(",");
				idTipoSala = atoi(linea.substr(0, i).c_str());
				tipoSala = getTipoSala(listaTipoSala, idTipoSala);
				listaSala[count].setTipo(tipoSala);

				linea = linea.substr(i + 1);
				butacasStr = strToCharPointer(linea.c_str());
				int index = 0;
				Butaca** butacas = (Butaca**)malloc(Constantes::BUTACAS_FILAS * sizeof(Butaca*));
				for (int i = 0; i < Constantes::BUTACAS_FILAS; i++)
				{
					butacas[i] = (Butaca*)malloc(Constantes::BUTACAS_COLUMNAS * sizeof(Butaca));
					for (int j = 0; j < Constantes::BUTACAS_COLUMNAS; j++)
					{
						butacas[i][j].setFila(i);
						butacas[i][j].setColumna(j);
						int val = butacasStr[index] - 48;
						butacas[i][j].setOcupado(val);
					}
				}
				listaSala[count].setButacas(butacas);
			}
			catch (exception e)
			{
				string error = "Error: ";
				error = error + e.what();
				Constantes::showMessage(error.c_str());
			}
			count++;
		}
	}
	lectura.close();
	return listaSala;
}

CategoriaPelicula* Utils::getListaCategoriaPelicula()
{
	CategoriaPelicula* listaCategoriaPelicula = (CategoriaPelicula*)malloc(Constantes::CATEGORIA_PELICULA_MAX * sizeof(CategoriaPelicula));
	ifstream lectura;
	string linea;
	lectura.open(Constantes::getCategoriaPeliculaTXT(), ios::in);
	if (!lectura.fail()) {
		int i, id;
		string nombre;
		string descripcion;
		int count = 0;
		while (!lectura.eof())
		{
			getline(lectura, linea);
			try
			{
				i = linea.find(",");
				id = atoi(linea.substr(0, i).c_str());
				listaCategoriaPelicula[count].setId(id);

				linea = linea.substr(i + 1);
				i = linea.find(",");
				nombre = linea.substr(0, i);
				listaCategoriaPelicula[count].setNombre(strToCharPointer(nombre.c_str()));

				linea = linea.substr(i + 1);
				descripcion = linea;
				listaCategoriaPelicula[count].setDescripcion(strToCharPointer(descripcion.c_str()));
			}
			catch (exception e)
			{
				string error = "Error: ";
				error = error + e.what();
				Constantes::showMessage(error.c_str());
			}
			count++;
		}
	}
	lectura.close();
	return listaCategoriaPelicula;
}

Pelicula* Utils::getListaPelicula()
{
	CategoriaPelicula* listaCategoriPelicula = getListaCategoriaPelicula();
	Pelicula* listaPelicula = (Pelicula*)malloc(Constantes::PELICULAS_MAX * sizeof(Pelicula));
	ifstream lectura;
	string linea;
	lectura.open(Constantes::getPeliculaTXT(), ios::in);
	if (!lectura.fail()) {
		int i, id, estadoEstreno, idCategoria;
		string nombre;
		string descripcion;
		string nombreImg;
		string duracionStr;
		CategoriaPelicula c;
		int count = 0;
		while (!lectura.eof())
		{
			getline(lectura, linea);
			try
			{
				i = linea.find(",");
				id = atoi(linea.substr(0, i).c_str());
				listaPelicula[count].setId(id);
				//Constantes::showMessage(linea.substr(0, i).c_str());

				linea = linea.substr(i + 1);
				i = linea.find(",");
				estadoEstreno = atoi(linea.substr(0, i).c_str());
				listaPelicula[count].setEstadoEstreno(estadoEstreno);

				linea = linea.substr(i + 1);
				i = linea.find(",");
				nombre = linea.substr(0, i);
				listaPelicula[count].setNombre(strToCharPointer(nombre.c_str()));

				linea = linea.substr(i + 1);
				i = linea.find(",");
				descripcion = linea.substr(0, i);
				listaPelicula[count].setDescripcion(strToCharPointer(descripcion.c_str()));

				linea = linea.substr(i + 1);
				i = linea.find(",");
				nombreImg = linea.substr(0, i);
				listaPelicula[count].setNombreImg(strToCharPointer(nombreImg.c_str()));

				linea = linea.substr(i + 1);
				i = linea.find(",");
				idCategoria = atoi(linea.substr(0, i).c_str());
				c = getCategoriaPelicula(listaCategoriPelicula, idCategoria);
				listaPelicula[count].setCategoria(c);

				linea = linea.substr(i + 1);
				listaPelicula[count].setDuracion(strToHora(linea.c_str()));
			}
			catch (exception e)
			{
				string error = "Error: ";
				error = error + e.what();
				Constantes::showMessage(error.c_str());
			}
			count++;
		}
	}
	lectura.close();
	return listaPelicula;
}

CategoriaPelicula Utils::getCategoriaPelicula(CategoriaPelicula* lista, int id)
{
	CategoriaPelicula categoria;
	for (int i = 0; i < Constantes::CATEGORIA_PELICULA_MAX; i++)
	{
		if (lista[i].getId() == id)
		{
			categoria.setId(lista[i].getId());
			categoria.setNombre(lista[i].getNombre());
			categoria.setDescripcion(lista[i].getDescripcion());
			return categoria;
		}
	}
}

Pelicula Utils::getPelicula(Pelicula* lista, int id)
{
	Pelicula pelicula;
	for (int i = 0; i < Constantes::PELICULAS_MAX; i++)
	{
		if (lista[i].getId() == id)
		{
			//string f = "encontrado ";
			//char d = id;
			//string g = f + d;
			//Constantes::showMessage(g.c_str());
			//pelicula = &lista[i];
			//return pelicula;
			/*string name = lista[i].getNombre();
			string found = "encontrado: " + name;
			Constantes::showMessage(found.c_str());*/
			pelicula.setId(lista[i].getId());
			pelicula.setEstadoEstreno(lista[i].getEstadoEstreno());
			pelicula.setNombre(lista[i].getNombre());
			pelicula.setDescripcion(lista[i].getDescripcion());
			pelicula.setCategoria(lista[i].getCategoria());
			pelicula.setNombreImg(lista[i].getNombreImg());
			return pelicula;
		}
	}
}

Cliente* Utils::getListaCliente()
{
	Reserva* listaReservas = getListaReservas();
	Cliente* listaCliente = (Cliente*)malloc(Constantes::CLIENTES_MAX * sizeof(Cliente));
	ifstream lectura;
	string linea;
	lectura.open(Constantes::getClienteTXT(), ios::in);
	if (!lectura.fail()) {
		int i, id, tipoDoc, numReservas;
		string nroDoc;
		string nombres;
		string apellidos;
		string direccion;
		string email;
		string reservasStr;
		int count = 0;
		while (!lectura.eof())
		{
			getline(lectura, linea);
			try
			{
				i = linea.find(",");
				id = atoi(linea.substr(0, i).c_str());
				listaCliente[count].setId(id);

				linea = linea.substr(i + 1);
				i = linea.find(",");
				tipoDoc = atoi(linea.substr(0, i).c_str());
				listaCliente[count].setTipoDocumento(tipoDoc);

				linea = linea.substr(i + 1);
				i = linea.find(",");
				nroDoc = linea.substr(0, i);
				listaCliente[count].setNumeroDocumento(strToCharPointer(nroDoc.c_str()));

				linea = linea.substr(i + 1);
				i = linea.find(",");
				nombres = linea.substr(0, i);
				listaCliente[count].setNombre(strToCharPointer(nombres.c_str()));

				linea = linea.substr(i + 1);
				i = linea.find(",");
				apellidos = linea.substr(0, i);
				listaCliente[count].setApellido(strToCharPointer(apellidos.c_str()));

				linea = linea.substr(i + 1);
				i = linea.find(",");
				direccion = linea.substr(0, i);
				listaCliente[count].setDireccion(strToCharPointer(direccion.c_str()));

				linea = linea.substr(i + 1);
				i = linea.find(",");
				email = linea.substr(0, i);
				listaCliente[count].setEmail(strToCharPointer(email.c_str()));

				linea = linea.substr(i + 1);
				i = linea.find(",");
				numReservas = atoi(linea.substr(0, i).c_str());
				listaCliente[count].setNumReservas(numReservas);

				if (numReservas > 0)
				{
					linea = linea.substr(i + 1);
					reservasStr = linea;
					//Constantes::showMessage(reservasStr.c_str());
					int* ids = strToListId(reservasStr.c_str(), numReservas, "-");
					Reserva* reservasCliente = getReservasCliente(listaReservas, ids, numReservas);
					listaCliente[count].setReservas(reservasCliente);
				}
				
			}
			catch (exception e)
			{
				string error = "Error: ";
				error = error + e.what();
				Constantes::showMessage(error.c_str());
			}
			count++;
		}
	}
	lectura.close();
	return listaCliente;
}
void Utils::agregarCliente(int tipoDoc, string nroDoc, string nombres, string apellidos, string direccion, string email, int numReservas = 0)
{
	char temp[200];
	int cont = 1;
	FILE* f;
	f = fopen(Constantes::getClienteTXT(), "r");
	if (f == NULL) {
		printf("No se ha podido abrir el fichero.\n");
		exit(1);
	}
	while (!feof(f)) {
		fgets(temp, 200, f);
		cont++;
	}
	fstream escritura;
	escritura.open(Constantes::getClienteTXT(), ios::app);
	escritura << "\n";
	escritura << cont << "," << tipoDoc << "," << nroDoc << "," << nombres << "," << apellidos << "," << direccion << "," << email << "," << numReservas;
	escritura.close();
	printf("registro exitoso");
}
int Utils::cantidadClientes() {
	char temp[200];
	int cont = 0;
	FILE* f;
	f = fopen(Constantes::getClienteTXT(), "r");
	if (f == NULL) {
		printf("No se ha podido abrir el fichero.\n");
		//exit(1);
		return Constantes::CLIENTES_MAX;
	}
	while (!feof(f)) {
		fgets(temp, 200, f);
		cont++;
	}
	return cont;
}

Reserva* Utils::getReservasCliente(Reserva* reservas, int* ids, int tam)
{
	Reserva* reservasCliente = (Reserva*)malloc(tam * sizeof(Reserva));
	for (int i = 0; i < tam; i++)
	{
		reservasCliente[i] = reservas[ids[i]];
	}
	return reservasCliente;
}

Taquillero* Utils::getListaTaquillero()
{
	Taquillero* listaTaquillero = (Taquillero*)malloc(Constantes::TAQUILLEROS_MAX * sizeof(Taquillero));
	ifstream lectura;
	string linea;
	lectura.open(Constantes::getTaquilleroTXT(), ios::in);
	if (!lectura.fail()) {
		int i, id, tipoDoc;
		string nroDoc;
		string nombres;
		string apellidos;
		string direccion;
		string email;
		string usuario;
		string pass;
		string rutaImg;
		int count = 0;
		while (!lectura.eof())
		{
			getline(lectura, linea);
			try
			{
				i = linea.find(",");
				id = atoi(linea.substr(0, i).c_str());
				listaTaquillero[count].setId(id);

				linea = linea.substr(i + 1);
				i = linea.find(",");
				tipoDoc = atoi(linea.substr(0, i).c_str());
				listaTaquillero[count].setTipoDocumento(tipoDoc);

				linea = linea.substr(i + 1);
				i = linea.find(",");
				nroDoc = linea.substr(0, i);
				listaTaquillero[count].setNumeroDocumento(strToCharPointer(nroDoc.c_str()));

				linea = linea.substr(i + 1);
				i = linea.find(",");
				nombres = linea.substr(0, i);
				listaTaquillero[count].setNombre(strToCharPointer(nombres.c_str()));

				linea = linea.substr(i + 1);
				i = linea.find(",");
				apellidos = linea.substr(0, i);
				listaTaquillero[count].setApellido(strToCharPointer(apellidos.c_str()));

				linea = linea.substr(i + 1);
				i = linea.find(",");
				direccion = linea.substr(0, i);
				listaTaquillero[count].setDireccion(strToCharPointer(direccion.c_str()));

				linea = linea.substr(i + 1);
				i = linea.find(",");
				email = linea.substr(0, i);
				listaTaquillero[count].setEmail(strToCharPointer(email.c_str()));

				linea = linea.substr(i + 1);
				i = linea.find(",");
				usuario = linea.substr(0, i);
				listaTaquillero[count].setUsuario(strToCharPointer(usuario.c_str()));

				linea = linea.substr(i + 1);
				i = linea.find(",");
				pass = linea.substr(0, i);
				listaTaquillero[count].setPassword(strToCharPointer(pass.c_str()));

				linea = linea.substr(i + 1);
				rutaImg = linea;
				listaTaquillero[count].setRutaImg(strToCharPointer(rutaImg.c_str()));
			}
			catch (exception e)
			{
				string error = "Error: ";
				error = error + e.what();
				Constantes::showMessage(error.c_str());
			}
			count++;
		}
	}
	lectura.close();
	return listaTaquillero;
}

FuncionDeCine Utils::getFuncionSeleccionada()
{
	//Constantes::showMessage("entrando");
	Pelicula* peliculas = getListaPelicula();
	FuncionDeCine funcion;
	ifstream lectura;
	string linea;
	lectura.open("funcionGuardada.txt", ios::in);
	if (!lectura.fail()) {
		int i, id, idPelicula, idSala;
		string fechaStr;
		//Pelicula* p;
		Fecha f;
		int count = 0;
		while (!lectura.eof())
		{
			getline(lectura, linea);
			try
			{
				i = linea.find(",");
				id = atoi(linea.substr(0, i).c_str());
				funcion.setId(id);
				//Constantes::showMessage(linea.substr(0, i).c_str());

				linea = linea.substr(i + 1);
				i = linea.find(",");
				idPelicula = atoi(linea.substr(0, i).c_str());
				Pelicula p = getPelicula(peliculas, idPelicula);
				funcion.setPelicula(p);
				//Constantes::showMessage(linea.substr(0, i).c_str());

				linea = linea.substr(i + 1);
				i = linea.find(",");
				fechaStr = linea.substr(0, i);
				f = strToFecha(fechaStr.c_str());
				funcion.setFecha(f);
				//Constantes::showMessage(fechaStr.c_str());

				linea = linea.substr(i + 1);
				idSala = atoi(linea.c_str());
				funcion.setNumeroSala(idSala);
				//Constantes::showMessage(linea.c_str());
			}
			catch (exception e)
			{
				string error = "Error: ";
				error = error + e.what();
				Constantes::showMessage(error.c_str());
			}
			count++;
		}
	}
	lectura.close();
	return funcion;
}

void Utils::agregarFuncionGuardada(FuncionDeCine* funcion)
{
	char temp[200];
	fstream escritura;
	escritura.open("funcionGuardada.txt", ios::app);
	escritura << "\n";
	escritura << funcion->getId() << "," << funcion->getPelicula().getId() << "," << "12:08:2020:17:50" << "," << funcion->getNumeroSala();
	escritura.close();
	printf("registro exitoso");
}

FuncionDeCine* Utils::getListaFuncionDeCine(Pelicula* peliculas)
{
	FuncionDeCine* listaFunciones = (FuncionDeCine*)malloc(Constantes::FUNCIONES_MAX * sizeof(FuncionDeCine));
	ifstream lectura;
	string linea;
	lectura.open(Constantes::getFuncionDeCineTXT(), ios::in);
	if (!lectura.fail()) {
		int i, id, idPelicula, idSala;
		string fechaStr;
		//Pelicula* p;
		Fecha f;
		int count = 0;
		while (!lectura.eof())
		{
			getline(lectura, linea);
			try
			{
				i = linea.find(",");
				id = atoi(linea.substr(0, i).c_str());
				listaFunciones[count].setId(id);
				//Constantes::showMessage(linea.substr(0, i).c_str());

				linea = linea.substr(i + 1);
				i = linea.find(",");
				idPelicula = atoi(linea.substr(0, i).c_str());
				Pelicula p = getPelicula(peliculas, idPelicula);
				/*Pelicula peli;
				peli.setId(p->getId());
				peli.setEstadoEstreno(p->getEstadoEstreno());
				peli.setNombre(p->getNombre());
				peli.setDescripcion(p->getDescripcion());
				peli.setNombreImg(p->getNombreImg());
				peli.setDuracion(p->getDuracion());
				peli.setCategoria(p->getCategoria());*/
				listaFunciones[count].setPelicula(p);
				//Constantes::showMessage(linea.substr(0, i).c_str());

				linea = linea.substr(i + 1);
				i = linea.find(",");
				fechaStr = linea.substr(0, i);
				f = strToFecha(fechaStr.c_str());
				listaFunciones[count].setFecha(f);
				//Constantes::showMessage(fechaStr.c_str());

				linea = linea.substr(i + 1);
				idSala = atoi(linea.c_str());
				listaFunciones[count].setNumeroSala(idSala);
				//Constantes::showMessage(linea.c_str());
			}
			catch (exception e)
			{
				string error = "Error: ";
				error = error + e.what();
				Constantes::showMessage(error.c_str());
			}
			count++;
		}
	}
	lectura.close();
	return listaFunciones;
}

FuncionDeCine Utils::getFuncionPorId(FuncionDeCine* funciones, int id)
{
	for (int i = 0; i < Constantes::FUNCIONES_MAX; i++)
	{
		if (funciones[i].getId() == id)
		{
			return funciones[i];
		}
	}
}

Reserva* Utils::getListaReservas()
{
	
	Reserva* listaReservas = (Reserva*)malloc(Constantes::RESERVAS_MAX * sizeof(Reserva)); // --->
	ifstream lectura;
	string linea;
	string asientos;
	lectura.open(Constantes::getReservaTXT(), ios::in);
	if (!lectura.fail()) {
		//id:1,nroFuncion:4,nroButacas:4,FilaColumnaButaca:5-5.5-6.5-7.5-8
		int i, id, nroFuncion, nroButacas,nroAsientoF, nroAsientoC;
		//int i, id, capacidad, idTipoSala;
		char* butacasStr;
		TipoSala tipoSala;
		int count = 0;
		while (!lectura.eof())
		{
			getline(lectura, linea);
			try
			{ 
				//Constantes::showMessage(linea.c_str()); // ---> para mostrarlo ---- comentar 
				i = linea.find(",");
				id = atoi(linea.substr(0, i).c_str());
				listaReservas[count].setId(id);

				linea = linea.substr(i + 1);
				i = linea.find(",");
				nroFuncion = atoi(linea.substr(0, i).c_str());
				listaReservas[count].setNumeroFuncion(nroFuncion);

				linea = linea.substr(i + 1);
				i = linea.find(",");
				nroButacas = atoi(linea.substr(0, i).c_str());
				listaReservas[count].setCantidadButacas(nroButacas);

				linea = linea.substr(i + 1);
				string lineaAux;
				int iAux = 0;
				Butaca* butacas = (Butaca*)malloc(nroButacas * sizeof(Butaca*));
				for (int k = 0;k < nroButacas;k++) {
					iAux= linea.find(".");
					string FC = linea.substr(0, iAux).c_str();
					int iGuion= FC.find("-");					
					int F = atoi(FC.substr(0, iGuion).c_str());
					int C = atoi(FC.substr(iGuion+1).c_str());
					butacas[k].setFila(F);
					butacas[k].setColumna(C);
					butacas[k].setOcupado(true);

					linea=linea.substr(iAux + 1);
				}
				listaReservas[count].setButacasReservadas(butacas);
			}
			catch (exception e)
			{
				string error = "Error: ";
				error = error + e.what();
				Constantes::showMessage(error.c_str());
			}
			count++;
		}
	}
	lectura.close();
	return listaReservas;
}

int Utils::cantidadReservas() {
	char temp[200];
	int cont = 0;
	FILE* f;
	f = fopen(Constantes::getReservaTXT(), "r");
	if (f == NULL) {
		printf("No se ha podido abrir el fichero.\n");
		//exit(1);
		return Constantes::RESERVAS_MAX;
	}
	while (!feof(f)) {
		fgets(temp, 200, f);
		cont++;
	}
	return cont;
}

std::string Utils::getTextBox(System::String^ aux) {
	string dato;
	for (int i = 0; i < aux->Length; i++)
	{
		dato += (char)aux[i];
	}
	cout << dato;
	return dato;
}

void Utils::guardarReservaTxt(int fun, int numButacas, std::string butacas, int indiceCli)
{
	char temp[200];
	int cont = 1;
	FILE* f;
	f = fopen(Constantes::getReservaTXT(), "r");
	if (f == NULL) {
		printf("No se ha podido abrir el fichero.\n");
		//exit(1);
	}
	while (!feof(f)) {
		fgets(temp, 200, f);
		cont++;
	}
	fstream escritura;
	escritura.open(Constantes::getReservaTXT(), ios::app);
	escritura << "\n";
	escritura << cont << "," << numButacas << "," << butacas;
	escritura.close();
	printf("registro exitoso");
}

void Utils::actualizarUsuario(int id, int tipoDoc, string nroDoc, string nombres, string apellidos, string direccion, string email, string user, string pwd)
{
	string users[5];
	int i = 0;
	std::ifstream leer(Constantes::getTaquilleroTXT());
	while (getline(leer, users[i])) {
		i++;
	}
	string img;
	switch (id) {
	case 1:
		img = "raquel.jpg"; break;
	case 2:
		img = "arnold.jpg"; break;
	case 3:
		img = "melany.jpg"; break;
	case 4:
		img = "karen.jpg"; break;
	case 5:
		img = "anyela.jpg"; break;
	}
	fstream escritura;
	escritura.open(Constantes::getTaquilleroTXT(), ios::out);
	for (int i = 0; i < 5; i++) {

		if (i + 1 != id && i == 0)
		{
			escritura << users[i];
		}
		else if (i + 1 != id)
		{
			escritura << "\n" << users[i];
		}
		else if (i == 0)
		{
			escritura << id << "," << tipoDoc << "," << nroDoc << "," << nombres << "," << apellidos << "," << direccion << "," << email << "," << user << "," << pwd << "," << img;
		}
		else
		{
			escritura << "\n" << id << "," << tipoDoc << "," << nroDoc << "," << nombres << "," << apellidos << "," << direccion << "," << email << "," << user << "," << pwd << "," << img;
		}
	}
	escritura.close();
	printf("registro exitoso");
}
string Utils::convertToString(char* a, int size)
{
	string s(a);
	return s;
}