#pragma once
#include "Usuario.h"
class Taquillero :
    public Usuario{
        public:
            void crearReserva();
            void editarReserva();
            void eliminarReserva();
            void verReservas();
            void verFuncione();
};
