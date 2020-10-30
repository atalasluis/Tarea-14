#pragma once
#include "Punto.h"
class Linea
{
private:
	char orientacion;
	int tamaño;
	Punto cordenadas;
	
public:
	Linea(char orientacion, int tamaño, int x, int y);
	~Linea();
	void dibujar();
	void borrar();

};

