#pragma once
#include <iostream>
#include "Formato.h"
using namespace std;

class Punto
{
private:
	char caracter;
	int y;
	int x;

public:
	Punto(int x, int y);
	~Punto();
	void dibujar();
	void borrar();
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
	void setCaracter(int caracter);

};

