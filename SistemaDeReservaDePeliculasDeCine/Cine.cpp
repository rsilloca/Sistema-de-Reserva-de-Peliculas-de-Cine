#include "pch.h"
#include "Cine.h"

void Cine::setSala(int indice, Sala sala){
	*(salas + indice) = sala;
}

Sala* Cine::getSala(int indice){
	return (salas + indice);
}

Sala* Cine::getSalas(){
	return salas;
}

void Cine::aniadirSala(Sala sala){
	*(salas + numSalas) = sala;
	numSalas++;
}

void Cine::setTaquilla(Taquilla taq){
	taquilla = taq;
}

Taquilla Cine::getTaquilla(){
	return taquilla;
}

void Cine::setPelicula(int indice, Pelicula pelicula){
	*(peliculas + indice) = pelicula;
}

Pelicula* Cine::getPeliculas()
{
	return peliculas;
}

Pelicula* Cine::getPelicula(int indice)
{
	return (peliculas + indice);
}

void Cine::aniadirPelicula(Pelicula pelicula){
	*(peliculas + numPeliculas) = pelicula;
}
