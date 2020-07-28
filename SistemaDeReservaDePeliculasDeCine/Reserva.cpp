#include "pch.h"
#include "Reserva.h"

int Reserva::getId() {
	return id;
}
void Reserva::setId(int ID) {
	id = ID;
}

int Reserva::getNumeroFuncion() {
	return numeroFuncion;
}
void Reserva::setNumeroFuncion(int numFunction) {
	numeroFuncion = numFunction;
}
int Reserva::getCantidadButacas() {
	return cantidadButacas;
}
void Reserva::setCantidadButacas(int caquantityArmchairs) {
	cantidadButacas = caquantityArmchairs;
}
Butaca* Reserva::getButacasReservadas() {
	return butacasReservadas;
}
void Reserva::setButacasReservadas(Butaca* armchairs) {
	butacasReservadas = armchairs;
}

/*
Butaca** Reserva::getButacas() {
	return butacas;
}
void Reserva::setButacas(Butaca** armchairs) {
	butacas = armchairs;
}
*/
