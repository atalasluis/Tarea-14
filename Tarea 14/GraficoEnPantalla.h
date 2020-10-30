#pragma once
#include"ElementoGrafico.h"


class GraficoEnPantalla
{
private:
	ElementoGrafico** elementos;
	int tanMax;
	int ind;
public:
	GraficoEnPantalla(int tanMax);
	~GraficoEnPantalla();
	void dibujar();
	void borrar();
	void agregar();
	void eliminar();
};

