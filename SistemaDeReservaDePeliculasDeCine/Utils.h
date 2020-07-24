#pragma once
#include "Cine.h"
#include "TipoSala.h"
#include "CategoriaPelicula.h"
#include "Pelicula.h"
#include "CategoriaPelicula.h"
#include "Cliente.h"
#include "Hora.h"

class Utils
{
public:
	char* strToCharPointer(const char*);
	void guardarCine(Cine*);
	void abrirCine(Cine* cine);
	TipoSala* getListaTipoSala();
	TipoSala getTipoSala(TipoSala*, int);
	Sala* getListaSala();
	CategoriaPelicula* getListaCategoriaPelicula();
	Pelicula* getListaPelicula();
	CategoriaPelicula getCategoriaPelicula(CategoriaPelicula*, int);
	Pelicula* getPelicula(Pelicula*, int);
	Cliente* getListaCliente();
	Taquillero* getListaTaquillero();
	FuncionDeCine* getListaFuncionDeCine(Pelicula*);
	Hora strToHora(const char*);
	Fecha strToFecha(const char*);
	Reserva* getListaReservas();
};

