#include "pch.h"
#include "Fecha.h"

void Fecha::setDia(int day)
{
	dia = day;
}

void Fecha::setMes(int month)
{
	mes = month;
}

void Fecha::setAnio(int year)
{
	anio = year;
}

void Fecha::setHora(Hora hour)
{
	hora = hour;
}

int Fecha::getDia()
{
	return dia;
}

int Fecha::getMes()
{
	return mes;
}

int Fecha::getAnio()
{
	return anio;
}

Hora Fecha::getHora()
{
	return hora;
}
