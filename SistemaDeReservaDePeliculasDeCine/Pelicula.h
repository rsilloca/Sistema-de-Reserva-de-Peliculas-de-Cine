#pragma once
#include "CategoriaPelicula.h"
#include "Hora.h"
class Pelicula
{
private:
	bool estadoEstreno;
	char* nombre;
	char* descripcion;
	CategoriaPelicula categoria;
	Hora duracion;

public:
	void setEstadoEstreno(bool status);
	void setNombre(char* name);
	void setDescripcion(char* description);
	void setCategoria(CategoriaPelicula category);
	void setDuracion(Hora duration);
	bool getEstadoEstreno();
	char* getNombre();
	char* getDescripcion();
	CategoriaPelicula getCategoria();
	Hora getDuracion();
};

