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

Pelicula* Utils::getPelicula(Pelicula* lista, int id)
{
	Pelicula* pelicula;
	for (int i = 0; i < Constantes::PELICULAS_MAX; i++)
	{
		if (lista[i].getId() == id)
		{
			//string f = "encontrado ";
			//char d = id;
			//string g = f + d;
			//Constantes::showMessage(g.c_str());
			pelicula = &lista[i];
			return pelicula;
			/*string name = lista[i].getNombre();
			string found = "encontrado: " + name;
			Constantes::showMessage(found.c_str());
			pelicula.setId(lista[i].getId());
			pelicula.setEstadoEstreno(lista[i].getEstadoEstreno());
			pelicula.setNombre(lista[i].getNombre());
			pelicula.setDescripcion(lista[i].getDescripcion());
			pelicula.setCategoria(lista[i].getCategoria());
			pelicula.setNombreImg(lista[i].getNombreImg());
			return pelicula;*/
		}
	}
}

Cliente* Utils::getListaCliente()
{
	Cliente* listaCliente = (Cliente*)malloc(Constantes::CLIENTES_MAX * sizeof(Cliente));
	ifstream lectura;
	string linea;
	lectura.open(Constantes::getClienteTXT(), ios::in);
	if (!lectura.fail()) {
		int i, id, tipoDoc;
		string nroDoc;
		string nombres;
		string apellidos;
		string direccion;
		string email;
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
				email = linea;
				listaCliente[count].setEmail(strToCharPointer(email.c_str()));
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
				pass = linea;
				listaTaquillero[count].setPassword(strToCharPointer(pass.c_str()));
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

FuncionDeCine* Utils::getListaFuncionDeCine(Pelicula* peliculas)
{
	FuncionDeCine* listaFunciones = (FuncionDeCine*)malloc(Constantes::FUNCIONES_MAX * sizeof(FuncionDeCine));
	ifstream lectura;
	string linea;
	lectura.open(Constantes::getFuncionDeCineTXT(), ios::in);
	if (!lectura.fail()) {
		int i, id, idPelicula, idSala;
		string fechaStr;
		Pelicula* p;
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
				p = getPelicula(peliculas, idPelicula);
				Pelicula peli;
				peli.setId(p->getId());
				peli.setEstadoEstreno(p->getEstadoEstreno());
				peli.setNombre(p->getNombre());
				peli.setDescripcion(p->getDescripcion());
				peli.setNombreImg(p->getNombreImg());
				peli.setDuracion(p->getDuracion());
				peli.setCategoria(p->getCategoria());
				listaFunciones[count].setPelicula(peli);
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

Reserva* Utils::getListaReservas()
{
	
	Reserva* listaReservas = (Reserva*)malloc(5 * sizeof(Reserva)); // --->
	ifstream lectura;
	string linea;
	string asientos;
	lectura.open( "reservas.txt", ios::in);
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
				Constantes::showMessage(linea.c_str()); // ---> para mostrarlo ---- comentar 
				i = linea.find(",");
				id = atoi(linea.substr(0, i).c_str());
				listaReservas[count].setId(id);
				Constantes::showMessage(linea.c_str()); // ---> para mostrarlo ---- comentar 
				linea = linea.substr(i + 1);
				i = linea.find(",");
				nroFuncion = atoi(linea.substr(0, i).c_str());
				listaReservas[count].setNumeroFuncion(nroFuncion);
				Constantes::showMessage(linea.c_str()); // ---> para mostrarlo ---- comentar 
				linea = linea.substr(i + 1);
				i = linea.find(",");
				nroButacas = atoi(linea.substr(0, i).c_str());
				listaReservas[count].setCantidadButacas(nroButacas);
				Constantes::showMessage(linea.c_str()); // ---> para mostrarlo ---- comentar 
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
				listaReservas[count].setCantidadButacas(nroButacas);
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