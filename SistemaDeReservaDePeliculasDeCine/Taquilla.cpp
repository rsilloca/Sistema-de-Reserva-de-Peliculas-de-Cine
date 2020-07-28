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