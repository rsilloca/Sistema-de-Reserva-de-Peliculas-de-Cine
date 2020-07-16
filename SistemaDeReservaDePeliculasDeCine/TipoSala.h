#pragma once
class TipoSala
{
private:
	int id;
	char* nombre;
	char* descripcion;
	double precioEntradaPersona;
public:
	TipoSala();
	TipoSala(int ID, char* name, char* description, double price);
	int getId();
	void setId(int Id);
	char* getNombre();
	void setNombre(char* name);
	char* getDescripcion();
	void setDescripcion(char* description);
	double getPrecioEntradaPersona();
	void setPrecioEntradaPersona(double price);

};

