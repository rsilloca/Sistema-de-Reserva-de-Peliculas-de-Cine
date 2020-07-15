#include "Sala.h"

Sala::Sala() {

}
Sala::Sala(int Id, int capacity, TipoSala type, Butaca** armchairs) {
	setId(Id);
	setCapacidad(capacity);
	setTipo(type);
	setButacas(armchairs);
}

int Sala::getId() {
	return id;
}
void Sala::setId(int Id) {
	id = Id;
}
int Sala::getCapacidad() {
	return capacidad;
}
void Sala::setCapacidad(int capacity) {
	capacidad = capacity;
}
TipoSala Sala::getTipo() {
	return tipo;
}
void Sala::setTipo(TipoSala type) {
	tipo = type;
}
Butaca** Sala::getButacas() {
	return butacas;
}

void Sala::setButacas(Butaca** armchairs) {
	butacas = armchairs;
}