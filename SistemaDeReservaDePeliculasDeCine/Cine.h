#pragma once
#include "Sala.h"
#include "Taquilla.h"
#include "Pelicula.h"
#include <cstddef>

class Cine {
private:
	Cine();
	static Cine* instance;
	int numSalas = 0;
	int numPeliculas = 0;
	Sala* salas;
	Taquilla taquilla;
	Pelicula* peliculas;

public:

	// Patron de disenio Singleton
	static Cine* getInstance()
	{
		if (instance == NULL)
			instance = new Cine();
		else
			return instance;
	}

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
};

Cine* Cine::instance = NULL;
