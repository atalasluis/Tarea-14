#pragma once
#include "Punto.h"
class GarabatoPuntos
{
private:
	Punto** garabatoPuntos;
	int tamMax;
	int ind;
public:
	GarabatoPuntos(int tamMax);
	~GarabatoPuntos();
	void registrar();
	void dibujar();
	void borrar();
};

