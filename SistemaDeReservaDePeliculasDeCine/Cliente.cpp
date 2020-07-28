#include "pch.h"
#include "Cliente.h"

void Cliente::setReserva(int indice, Reserva reserva){
	*(reservas + indice) = reserva;
}

Reserva* Cliente::getReserva(int indice){
	return (reservas + indice);
}

Reserva* Cliente::getReservas(){
	return reservas;
}

void Cliente::aniadirReserva(Reserva reserva){
	*(reservas + numReserva) = reserva;
}

void Cliente::setReservas(Reserva* _reservas) {
	reservas = _reservas;
}

int Cliente::getNumReservas()
{
	return numReserva;
}
void Cliente::setNumReservas(int _num)
{
	numReserva = _num;
}