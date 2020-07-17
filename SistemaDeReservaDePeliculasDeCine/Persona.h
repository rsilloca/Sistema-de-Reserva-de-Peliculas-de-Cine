#pragma once
class Persona
{
public:
	const int DNI = 1;
private:
	int id;
	int tipoDocumento;
	char* numeroDocumento;
	char* nombres;
	char* apellidos;
	char* direccion;
	char* email;

public:
	void setId(int cod);
	int getId();

	void setTipoDocumento(int tipo);
	int getTipoDocumento();

	void setNumeroDocumento(char* numero);
	char* getNumeroDocumento();

	void setNombre(char* name);
	char* getNombre();

	void setApellido(char* surname);
	char* getApellido();

	void setDireccion(char* dir);
	char* getDireccion();

	void setEmail(char* correo);
	char* getEmail();
};

