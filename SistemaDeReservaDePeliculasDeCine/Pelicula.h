#pragma once
#include "CategoriaPelicula.h"
#include "Hora.h"
class Pelicula
{
private:
	int id;
	bool estadoEstreno;
	char* nombre;
	char* descripcion;
	char* nombreImg;
	CategoriaPelicula categoria;
	Hora duracion;

public:
	void setId(int id);
	void setEstadoEstreno(bool status);
	void setNombre(char* name);
	void setDescripcion(char* description);
	void setCategoria(CategoriaPelicula category);
	void setDuracion(Hora duration);
	void setNombreImg(char* name);
	int getId();
	bool getEstadoEstreno();
	char* getNombre();
	char* getDescripcion();
	CategoriaPelicula getCategoria();
	Hora getDuracion();
	char* getNombreImg();
};

