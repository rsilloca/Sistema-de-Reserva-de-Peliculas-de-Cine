#include "pch.h"
#include "Reserva.h"
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
Butaca** Reserva::getButacas() {
	return butacas;
}
void Reserva::setButacas(Butaca** armchairs) {
	butacas = armchairs;
}