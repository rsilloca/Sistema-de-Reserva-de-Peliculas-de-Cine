#pragma once
#include "Hora.h"
class Fecha
{
private:
	int dia;
	int mes;
	int anio;
	Hora hora;

public:
	void setDia(int day);
	void setMes(int month);
	void setAnio(int year);
	void setHora(Hora hour);
	int getDia();
	int getMes();
	int getAnio();
	Hora getHora();
};

