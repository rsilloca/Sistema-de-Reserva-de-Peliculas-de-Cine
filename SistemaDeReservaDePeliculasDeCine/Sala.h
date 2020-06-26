#pragma once
#include "TipoSala.h"
#include "Butaca.h"

class Sala
{
private:
	int numero;
	TipoSala tipo;
	Butaca** butacas;
};

