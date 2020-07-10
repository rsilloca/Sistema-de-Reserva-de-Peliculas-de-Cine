#pragma once
#include "TipoSala.h"
#include "Butaca.h"

class Sala
{
private:
	int id;
	int capacidad;
	TipoSala tipo;
	Butaca **butacas;
public:
	int getId ();
	void setId(int Id);
	int getCapacidad();
	void setCapacidad(int capacity);
	TipoSala getTipo();
	void setTipo(TipoSala type);
	Butaca** getButacas();
	void setButacas(Butaca ** armchairs);

};

