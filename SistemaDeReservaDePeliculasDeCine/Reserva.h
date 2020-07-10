#pragma once
#include "Butaca.h"
class Reserva
{
private:
	int numeroFuncion;
	int cantidadButacas;
	Butaca** butacas;
public:
	int getNumeroFuncion();
	void setNumeroFuncion(int numFunction);
	int getCantidadButacas();
	void setCantidadButacas(int caquantityArmchairs);
	Butaca** getButacas();
	void setButacas(Butaca** armchairs);
};

