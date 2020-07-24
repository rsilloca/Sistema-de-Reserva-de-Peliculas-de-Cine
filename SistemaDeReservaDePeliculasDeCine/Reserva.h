#pragma once
#include "Butaca.h"
class Reserva
{
private:
	int id; 
	int numeroFuncion;
	int cantidadButacas;
	Butaca* butacasReservadas;
	//Butaca** butacas;
public:
	int getId();
	void setId(int ID);
	int getNumeroFuncion();
	void setNumeroFuncion(int numFunction);
	int getCantidadButacas();
	void setCantidadButacas(int caquantityArmchairs);
	Butaca* getButacasReservadas();
	void setButacasReservadas(Butaca* armchairs);
	//Butaca** getButacas();
	//void setButacas(Butaca** armchairs);
};

