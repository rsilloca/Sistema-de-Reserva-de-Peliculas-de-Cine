#include "pch.h"
#include "Persona.h"

void Persona::setId(int cod){
	id = cod;
}

int Persona::getId(){
	return id;
}

void Persona::setTipoDocumento(int tipo){
	tipoDocumento = tipo;
}

int Persona::getTipoDocumento(){
	return tipoDocumento;
}

void Persona::setNumeroDocumento(char* numero){
	numeroDocumento = numero;
}

char* Persona::getNumeroDocumento(){
	return numeroDocumento;
}

void Persona::setNombre(char* name){
	nombres = name;
}

char* Persona::getNombre(){
	return nombres;
}

void Persona::setApellido(char* surname){
	apellidos = surname;
}

char* Persona::getApellido()
{
	return apellidos;
}

void Persona::setDireccion(char* dir){
	direccion = dir;
}

char* Persona::getDireccion(){
	return direccion;
}

void Persona::setEmail(char* correo){
	email = correo;
}

char* Persona::getEmail(){
	return email;
}
