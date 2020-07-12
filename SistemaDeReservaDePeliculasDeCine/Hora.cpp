#include "pch.h"
#include "Hora.h"

void Hora::setHoras(int hour)
{
	horas = hour;
}

void Hora::setMinutos(int minute)
{
	minutos = minute;
}

void Hora::setSegundos(int seconds)
{
	segundos = seconds;
}

int Hora::getHoras()
{
	return horas;
}

int Hora::getMinutos()
{
	return minutos;
}

int Hora::getSegundos()
{
	return segundos;
}
