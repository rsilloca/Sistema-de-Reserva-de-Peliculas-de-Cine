#include "pch.h"
#include "Pelicula.h"

void Pelicula::setEstadoEstreno(bool status)
{
	estadoEstreno = status;
}

void Pelicula::setNombre(char* name)
{
	nombre = name;
}

void Pelicula::setDescripcion(char* description)
{
	descripcion = description;
}

void Pelicula::setCategoria(CategoriaPelicula category)
{
	categoria = category;
}

void Pelicula::setDuracion(Hora duration)
{
	duracion = duration;
}

bool Pelicula::getEstadoEstreno()
{
	return estadoEstreno;
}

char* Pelicula::getNombre()
{
	return nombre;
}

char* Pelicula::getDescripcion()
{
	return descripcion;
}

CategoriaPelicula Pelicula::getCategoria()
{
	return categoria;
}

Hora Pelicula::getDuracion()
{
	return duracion;
}
