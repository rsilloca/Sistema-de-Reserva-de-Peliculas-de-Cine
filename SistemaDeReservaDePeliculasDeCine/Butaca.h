#pragma once
class Butaca
{
private:
	bool ocupado;
	int fila;
	int columna;
public:
	bool getOcupado();
	void setOcupado(bool occupied);
	int getFila();
	void setFila(int row);
	int getColumna();
	void setColumna(int column);
};

