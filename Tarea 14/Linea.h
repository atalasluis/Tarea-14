#pragma once
#include "Punto.h"
class Linea
{
private:
	char orientacion;
	int tama�o;
	Punto cordenadas;
	
public:
	Linea(char orientacion, int tama�o, int x, int y);
	~Linea();
	void dibujar();
	void borrar();

};

