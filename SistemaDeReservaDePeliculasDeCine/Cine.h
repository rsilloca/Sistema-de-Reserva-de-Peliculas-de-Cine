#pragma once
#include "Sala.h"
#include "Taquilla.h"
#include "Pelicula.h"

class Cine {
private:
	int numSalas = 0;
	int numPeliculas = 0;
	Sala* salas;
	Taquilla taquilla;
	Pelicula* peliculas;

public:
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

