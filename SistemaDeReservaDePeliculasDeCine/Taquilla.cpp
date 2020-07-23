#include "pch.h"
#include "Taquilla.h"
#include "FuncionDeCine.h"
#include "Constantes.h"
#include "Cliente.h"
#include "Taquillero.h"
#include "Utils.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
using namespace System::Windows::Forms;
using namespace System;

Taquilla::Taquilla() {}

Taquilla::Taquilla(Pelicula* peliculas)
{
	Utils util;
	this->clientes = util.getListaCliente();
	this->numCliente = Constantes::CLIENTES_MAX;
	this->taquilleros = util.getListaTaquillero();
	this->numTaquillero = Constantes::TAQUILLEROS_MAX;
	this->funciones = util.getListaFuncionDeCine(peliculas);
	this->numFuncion = Constantes::FUNCIONES_MAX;
}

/*void Taquilla::setTaquillero(int indice, Taquillero taquillero){
	*(taquilleros + indice) = taquillero;
}*/

Taquillero* Taquilla::getTaquilleros() {
	return taquilleros;
}

Taquillero* Taquilla::getTaquillero(int indice) {
	return (taquilleros + indice);
}

/*void Taquilla::aniadirTaquillero(Taquillero taquillero){
	*(taquilleros + numTaquillero) = taquillero;
	numTaquillero++;
}*/

void Taquilla::setFuncion(int indice, FuncionDeCine funcion) {
	*(funciones + indice) = funcion;
}

FuncionDeCine* Taquilla::getFunciones() {
	ifstream lectura;
	string linea;
	lectura.open("funciones_de_cine.txt", ios::in);
	int i = 0;
	funciones = (FuncionDeCine*)malloc(Constantes::FUNCIONES_MAX * sizeof(FuncionDeCine));
	if (!lectura.fail()) {
		getline(lectura, linea);
		while (!lectura.eof())
		{
			getline(lectura, linea);
			int m = linea.find(",");
			Pelicula p;
			//p.setNombre(linea.substr(0, m).c_str());
			//p.setNombreImg(linea.substr(m + 1).c_str());
			// MessageBox::Show(gcnew String(linea.c_str()) + "  " + m + "  " + gcnew String(linea.substr(0, m).c_str()) + " " + gcnew String(linea.substr(m + 1).c_str()));
			Fecha f;
			f.setDia(12);
			f.setMes(12);
			f.setAnio(2020);
			Hora h;
			h.setHoras(19);
			h.setMinutos(30);
			f.setHora(h);
			funciones[i].setId(i);
			funciones[i].setNumeroSala(3);
			funciones[i].setFecha(f);
			funciones[i].setPelicula(p);
			numFuncion++;
			i++;
		}
	}
	lectura.close();
	return funciones;
}

FuncionDeCine* Taquilla::getFuncion(int indice) {
	return (funciones + indice);
}

void Taquilla::aniadirFuncion(FuncionDeCine funcion) {
	*(funciones + numFuncion) = funcion;
	numFuncion;
}

/*void Taquilla::setCliente(int indice, Cliente cliente){
	*(clientes + indice) = cliente;
}*/

Cliente* Taquilla::getClientes() {
	return clientes;
}

Cliente* Taquilla::getCliente(int indice) {
	return (clientes + indice);
}

/*void Taquilla::aniadirCliente(Cliente cliente){
	*(clientes + numCliente) = cliente;
	numCliente++;
}*/

int Taquilla::getNumFunciones()
{
	return numFuncion;
}

int Taquilla::getNumTaquilleros()
{
	return numTaquillero;
}

int Taquilla::getNumClientes()
{
	return numCliente;
}