#pragma once
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

class Constantes
{
public:
	// Tamanios de texto
	static const int SIZE_TEXTO_CORTO = 64;
	static const int SIZE_TEXTO_LARGO = 512;

	// Tipos de documento
	static const int DNI = 1;
	static const int CARNE_DE_EXTRANJERIA = 2;

	// Capacidades
	static const int SALAS_MAX = 8;
	static const int PELICULAS_MAX = 15;
	static const int FUNCIONES_MAX = 10;
	static const int BUTACAS_FILAS = 5;
	static const int BUTACAS_COLUMNAS = 10;
	static const int TAQUILLEROS_MAX = 5;
	static const int CLIENTES_MAX = 4;
	static const int TIPO_SALA_MAX = 4;
	static const int CATEGORIA_PELICULA_MAX = 7;
	static const int RESERVAS_MAX = 5;

	// Nombres archivos y cantidades constantes
	static char* getTipoSalaTXT()
	{
		return "tipo_sala.txt";
	}
	static char* getSalaTXT()
	{
		return "salas.txt";
	}
	static char* getCategoriaPeliculaTXT()
	{
		return "categorias_pelicula.txt";
	}
	static char* getPeliculaTXT()
	{
		return "pelicula.txt";
	}
	static char* getClienteTXT()
	{
		return "clientes.txt";
	}
	static char* getTaquilleroTXT()
	{
		return "taquilleros.txt";
	}
	static char* getFuncionDeCineTXT()
	{
		return "funciones.txt";
	}
	static char* getReservaTXT()
	{
		return "reservas.txt";
	}

	// Mensajes de Informacion
	static void showMessage(const char* text)
	{
		MessageBox::Show(gcnew String(text));
	}

};

