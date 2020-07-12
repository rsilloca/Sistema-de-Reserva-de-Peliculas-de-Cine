#pragma once
#include "Persona.h"
#include "Reserva.h"
class Cliente :
    public Persona{
    private:
        int numReserva;
        Reserva* reservas;
    public:
        void setReserva(int indice, Reserva reserva);
        Reserva* getReserva(int indice);
        Reserva* getReservas();
        void aniadirReserva(Reserva reserva);
};

