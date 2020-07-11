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
