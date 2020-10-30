#pragma once
#include "GarabatoLineas.h"
#include "GarabatoPuntos.h"
class ElementoGrafico
{
private:
	GarabatoLineas figuraLineas;
	GarabatoPuntos figuraPuntos;
	string nombre;
	char tipo;
	int tamMax;
public:
	ElementoGrafico(string nombre, int tamMax, char tipo);
	~ElementoGrafico();
	void Dibujar();
	void borrar();
	void agregarFigura();
	string getNombre();
};

