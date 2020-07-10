#pragma once
class Hora
{
private:
	int horas;
	int minutos;
	int segundos;

public:
	void setHoras(int hour);
	void setMinutos(int minute);
	void setSegundos(int seconds);
	int getHoras();
	int getMinutos();
	int getSegundos();
};

