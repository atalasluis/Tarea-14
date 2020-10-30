#include "ElementoGrafico.h"



ElementoGrafico::ElementoGrafico(string nombre, int tamMax, char tipo):figuraLineas(tamMax),figuraPuntos(tamMax)
{
	this->nombre = nombre;
	this->tipo = tipo;
	this->tamMax = tamMax;
}


ElementoGrafico::~ElementoGrafico()
{
}

void ElementoGrafico::Dibujar()
{
	for (int  i = 0; i < tamMax; i++)
	{
		if (tipo == 'l')
		{
			figuraLineas.dibujar();
		}
		if (tipo == 'p')
		{
			figuraPuntos.dibujar();
		}
	}
	gotoxy(0, 25);

}

void ElementoGrafico::borrar()
{
	for (int  i = 0; i < tamMax; i++)
	{
		if (tipo == 'l')
		{
			figuraLineas.borrar();
		}
		if (tipo == 'p')
		{
			figuraPuntos.borrar();
		}
	}
	gotoxy(0, 25);
}

void ElementoGrafico::agregarFigura()
{

	for (int  i = 0; i < tamMax; i++)
	{
		if (tipo == 'l')
		{
			figuraLineas.registrar();
		}
		if (tipo == 'p')
		{
			figuraPuntos.registrar();
		}
	}
	
}

string ElementoGrafico::getNombre()
{
	return string(nombre);
}






