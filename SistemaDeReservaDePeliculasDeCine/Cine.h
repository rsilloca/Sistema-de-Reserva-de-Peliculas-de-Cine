#pragma once
#include "Sala.h"
#include "Taquilla.h"
#include "Pelicula.h"

class Cine
{
private:
	Sala* salas;
	Taquilla taquilla;
	Pelicula* peliculas;
};

