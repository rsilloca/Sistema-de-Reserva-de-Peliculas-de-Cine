#include "pch.h"
#include "Sala.h"
#include "Constantes.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Sala::Sala() {

}

Sala::Sala(int Id, int capacity, TipoSala type, Butaca** armchairs) {
	setId(Id);
	setCapacidad(capacity);
	setTipo(type);
	setButacas(armchairs);
}

int Sala::getId() {
	return id;
}
void Sala::setId(int Id) {
	id = Id;
}
int Sala::getCapacidad() {
	return capacidad;
}
void Sala::setCapacidad(int capacity) {
	capacidad = capacity;
}
TipoSala Sala::getTipo() {
	return tipo;
}
void Sala::setTipo(TipoSala type) {
	tipo = type;
}
Butaca** Sala::getButacas() {
	return butacas;
}

void Sala::setButacas(Butaca** armchairs) {
	butacas = armchairs;
}

Sala* Sala::getListaSala(TipoSala* listaTipoSala)
{
	Sala* listaSala = (Sala*)malloc(Constantes::SALAS_MAX * sizeof(Sala));
	ifstream lectura;
	string linea;
	lectura.open(Constantes::getSalaTXT(), ios::in);
	if (!lectura.fail()) {
		/*int i, id;
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
				listaTipoSala[count].setNombre(Constantes::strToCharPointer(nombre.c_str()));

				linea = linea.substr(i + 1);
				i = linea.find(",");
				descripcion = linea.substr(0, i);
				listaTipoSala[count].setDescripcion(Constantes::strToCharPointer(descripcion.c_str()));

				linea = linea.substr(i + 1);
				precio = atof(linea.c_str());

			}
			catch (exception e)
			{
				string error = "Error: ";
				error = error + e.what();
				Constantes::showMessage(error.c_str());
			}
			count++;
		}*/
	}
	return listaSala;
}