#pragma once
class TipoSala
{
private:
	int id;
	char  nombre [20];
	char descripcion [50];
	double precioEntradaPersona;
public:
	int getId();
	void setId(int Id);
	char*  getNombre();
	void setNombre(char name []);
	char* getDescripcion();
	void setDescripcion(char description[]);
	double getPrecioEntradaPersona();
	void setPrecioEntradaPersona(double price);

};

