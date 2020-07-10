#pragma once
class CategoriaPelicula
{
private:
	int id;
	char* nombre;
	char* descripcion;

public:
	void setId(int idNumber);
	void setNombre(char* name);
	void setDescripcion(char* description);
	int getId();
	char* getNombre();
	char* getDescripcion();
};