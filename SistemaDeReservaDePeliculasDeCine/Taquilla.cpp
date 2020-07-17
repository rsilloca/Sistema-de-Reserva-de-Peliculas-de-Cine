#include "pch.h"
#include "Taquilla.h"

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

Cliente* Taquilla::getCliente() {
	return clientes;
}

Cliente* Taquilla::getClientes(int indice) {
	return (clientes + indice);
}

/*void Taquilla::aniadirCliente(Cliente cliente){
	*(clientes + numCliente) = cliente;
	numCliente++;
}*/