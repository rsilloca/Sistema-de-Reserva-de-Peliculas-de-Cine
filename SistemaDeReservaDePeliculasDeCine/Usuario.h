#pragma once
#include "Persona.h"
class Usuario :
	public Persona{
	private:
		char* usuario;
		char* password;
		char* rutaImg;
	public:
		char* getUsuario();
		void setUsuario(char* usu);

		char* getPassword();
		void setPassword(char* pas);

		char* getRutaImg();
		void setRutaImg(char*);
};

