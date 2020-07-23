#pragma once
#include "Taquillero.h"
#include "FuncionDeCine.h"
#include "Cliente.h"

class Taquilla {
private:
	int numTaquillero = 0;
	int numFuncion = 0;
	int numCliente = 0;
	Taquillero* taquilleros;
	FuncionDeCine* funciones;
	Cliente* clientes;

public:
	Taquilla();
	Taquilla(Pelicula*);
	void setTaquillero(int indice, Taquillero taquillero);
	Taquillero* getTaquilleros();
	Taquillero* getTaquillero(int indice);
	void aniadirTaquillero(Taquillero taquillero);

	void setFuncion(int indice, FuncionDeCine funcion);
	FuncionDeCine* getFunciones();
	FuncionDeCine* getFuncion(int indice);
	void aniadirFuncion(FuncionDeCine funcion);

	void setCliente(int indice, Cliente cliente);
	Cliente* getClientes();
	Cliente* getCliente(int indice);
	void aniadirCliente(Cliente cliente);

	int getNumFunciones();
	int getNumTaquilleros();
	int getNumClientes();

};