#include "pch.h"
#include "TipoSala.h"
#include <string.h>
TipoSala::TipoSala() {

}
TipoSala::TipoSala(int ID, char* name, char* description, double price) {
	setId(ID);
	setNombre(name);
	setDescripcion(description);
	setPrecioEntradaPersona(price);
}

int TipoSala::getId() {
	return id;
}
void TipoSala::setId(int Id) {
	id = Id;
}

char* TipoSala::getNombre() {
	return nombre;
}
void TipoSala::setNombre(char* name) {
	nombre = name;
}

char* TipoSala::getDescripcion() {
	return descripcion;
}
void TipoSala::setDescripcion(char* description) {
	descripcion = description;
}
double  TipoSala::getPrecioEntradaPersona() {
	return precioEntradaPersona;
}
void TipoSala::setPrecioEntradaPersona(double price) {
	precioEntradaPersona = price;
}