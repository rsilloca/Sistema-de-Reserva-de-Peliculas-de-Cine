#include "pch.h"
#include "Cine.h"
#include "Taquillero.h"
#include "TipoSala.h"
#include "Pelicula.h"
#include "Constantes.h"
#include "Utils.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

static Cine* instance = NULL;

Cine::Cine() {
	Utils util;
	this->salas = util.getListaSala();
	this->numSalas = Constantes::SALAS_MAX;
	this->peliculas = util.getListaPelicula();
	this->numPeliculas = Constantes::PELICULAS_MAX;
	this->taquilla = Taquilla(this->peliculas);
	//this->reservas= util.getListaReservas();
}

Cine* Cine::getInstance() {
	if (instance == NULL) {
		instance = new Cine();
	}
	return instance;
}

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

int Cine::getNumSalas()
{
	return numSalas;
}

int Cine::getNumPeliculas()
{
	return numPeliculas;
}