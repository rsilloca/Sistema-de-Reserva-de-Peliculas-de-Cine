#include "pch.h"
#include "Butaca.h"



bool Butaca::getOcupado() {
	return ocupado;
}
void  Butaca::setOcupado(bool occupied) {
	ocupado = occupied;
}
int  Butaca::getFila() {
	return fila;
}
void  Butaca::setFila(int row) {
	fila = row;
}
int  Butaca::getColumna() {
	return columna;
}
void  Butaca::setColumna(int column) {
	columna=column;
}