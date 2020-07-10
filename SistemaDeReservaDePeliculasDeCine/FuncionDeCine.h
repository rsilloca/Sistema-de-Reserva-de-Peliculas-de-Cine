#pragma once
#include "Fecha.h"
#include "Pelicula.h"
class FuncionDeCine
{
private:
	Pelicula pelicula;
	Fecha fecha;
	int numeroSala;
	int id;

public:
	void setPelicula(Pelicula movie);
	void setFecha(Fecha date);
	void setNumeroSala(int hallNumber);
	void setId(int idNumber);
	Pelicula getPelicula();
	Fecha getFecha();
	int getNumeroSala();
	int getId();
};

