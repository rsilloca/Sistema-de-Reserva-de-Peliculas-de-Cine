#pragma once
#include "Cine.h"
#include "TipoSala.h"
#include "CategoriaPelicula.h"
#include "Pelicula.h"
#include "CategoriaPelicula.h"
#include "Cliente.h"
#include "Hora.h"
#include <string>

class Utils
{
public:
	char* strToCharPointer(const char*);
	void guardarCine(Cine*);
	void abrirCine(Cine* cine);
	TipoSala* getListaTipoSala();
	TipoSala getTipoSala(TipoSala*, int);
	Sala* getListaSala();
	CategoriaPelicula* getListaCategoriaPelicula();
	Pelicula* getListaPelicula();
	CategoriaPelicula getCategoriaPelicula(CategoriaPelicula*, int);
	Pelicula getPelicula(Pelicula*, int);
	Cliente* getListaCliente();
	void agregarCliente(int tipoDoc, std::string nroDoc, std::string nombres, std::string apellidos, std::string direccion, std::string email, int numReservas);
	int cantidadClientes();
	void actualizarUsuario(int id, int tipoDoc, std::string nroDoc, std::string nombres, std::string apellidos, std::string direccion, std::string email, std::string user, std::string pwd);
	Taquillero* getListaTaquillero();
	FuncionDeCine* getListaFuncionDeCine(Pelicula*);
	Hora strToHora(const char*);
	Fecha strToFecha(const char*);
	Reserva* getListaReservas();

	std::string getTextBox(System::String^ aux);
	
	FuncionDeCine getFuncionPorId(FuncionDeCine*, int);
	int* strToListId(const char*, int, const char*);
	Reserva* getReservasCliente(Reserva*, int*, int);
	int getTamListStr(const char*, const char*);
};

