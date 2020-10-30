#include "Punto.h"



Punto::Punto(int x, int y)
{
	this->x = x;
	this->y = y;
	this->caracter = 250;
}


Punto::~Punto()
{
}

void Punto::dibujar()
{
	color(5);
	cout << caracter;
}

void Punto::borrar()
{
	cout << " ";
}

void Punto::setX(int x)
{
	this->x = x;
}

int Punto::getX()
{
	return x;
}

void Punto::setY(int y)
{
	this->y = y;
}

int Punto::getY()
{
	return y;
}

void Punto::setCaracter(int caracter)
{
	this->caracter = caracter;
}

