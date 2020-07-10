#pragma once
#include "Persona.h"
#include "Reserva.h"
class Cliente :
    public Persona{
    private:
        Reserva* reservas;
    public:
        void setReserva(int indice);
        Reserva* getReserva(int indice);
        Reserva* getReservas();
        void aniadirReserva();
};

