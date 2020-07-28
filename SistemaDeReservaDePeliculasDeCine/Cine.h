#pragma once
#include "Sala.h"
#include "Taquilla.h"
#include "Pelicula.h"
#include <cstddef>
#include <iostream>

class Cine {
private:
	Cine();
	int numSalas = 0;
	int numPeliculas = 0;
	Sala* salas;
	Taquilla taquilla;
	Pelicula* peliculas;
	//Reserva* reservas;

public:
	// Patron de disenio Singleton
	static Cine* getInstance();

	void setSala(int indice, Sala sala);
	Sala* getSala(int indice);
	Sala* getSalas();
	void aniadirSala(Sala sala);

	void setTaquilla(Taquilla taq);
	Taquilla getTaquilla();

	void setPelicula(int indice, Pelicula pelicula);
	Pelicula* getPeliculas();
	Pelicula* getPelicula(int indice);
	void aniadirPelicula(Pelicula pelicula);

	int getNumSalas();
	int getNumPeliculas();
};

// Cine* Cine::instance = NULL;
