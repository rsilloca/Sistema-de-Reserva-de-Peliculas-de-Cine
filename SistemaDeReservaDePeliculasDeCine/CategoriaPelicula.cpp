#include "pch.h"
#include "CategoriaPelicula.h"

void CategoriaPelicula::setId(int idNumber)
{
	id = idNumber;
}

void CategoriaPelicula::setNombre(char* name)
{
	nombre = name;
}

void CategoriaPelicula::setDescripcion(char* description)
{
	descripcion = description;
}

int CategoriaPelicula::getId()
{
	return id;
}

char* CategoriaPelicula::getNombre()
{
	return nombre;
}

char* CategoriaPelicula::getDescripcion()
{
	return descripcion;
}
