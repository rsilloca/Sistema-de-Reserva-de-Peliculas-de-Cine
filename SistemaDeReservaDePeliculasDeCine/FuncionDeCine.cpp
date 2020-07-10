#include "pch.h"
#include "FuncionDeCine.h"

void FuncionDeCine::setPelicula(Pelicula movie)
{
	pelicula = movie;
}

void FuncionDeCine::setFecha(Fecha date)
{
	fecha = date;
}

void FuncionDeCine::setNumeroSala(int hallNumber)
{
	numeroSala = hallNumber;
}

void FuncionDeCine::setId(int idNumber)
{
	id = idNumber;
}

Pelicula FuncionDeCine::getPelicula()
{
	return pelicula;
}

Fecha FuncionDeCine::getFecha()
{
	return fecha;
}

int FuncionDeCine::getNumeroSala()
{
	return numeroSala;
}

int FuncionDeCine::getId()
{
	return id;
}
