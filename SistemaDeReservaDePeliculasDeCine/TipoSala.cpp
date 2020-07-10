#include "pch.h"
#include "TipoSala.h"
#include <string.h>

int TipoSala::getId() {
	return id;
}
void TipoSala::setId(int Id) {
	id = Id;
}

char* TipoSala::getNombre() {
	return nombre;
}
void TipoSala::setNombre(char name []) {
	strcpy(nombre, name);
}

char* TipoSala::getDescripcion() {
	return descripcion;
}
void TipoSala::setDescripcion(char description[]) {
	strcpy(descripcion, description);
}