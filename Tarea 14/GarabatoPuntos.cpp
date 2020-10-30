#include "GarabatoPuntos.h"



GarabatoPuntos::GarabatoPuntos(int tamMax)
{
	this->tamMax = tamMax;
	ind = 0;
	garabatoPuntos = new Punto* [tamMax];
}


GarabatoPuntos::~GarabatoPuntos()
{
	for (int i = 0; i < ind; i++)
	{
		delete garabatoPuntos[i];
	}
	delete[] garabatoPuntos;
}

void GarabatoPuntos::registrar()
{
	if (ind < tamMax)
	{
		int x;
		int y;
		cout << "ingrese cordenada x: ";
		cin >> x;
		fflush stdin;
		cout << "ingrese cordenada y: ";
		cin >> y;
		fflush stdin;
		garabatoPuntos[ind] = new Punto(x, y);
		ind++;
	}
	else
	{
		cout << "Modulo de puntos lleno" << endl;
	}
}

void GarabatoPuntos::dibujar()
{
	for (int i = 0; i < ind; i++)
	{
		gotoxy(garabatoPuntos[i]->getX(), garabatoPuntos[i]->getY());
		garabatoPuntos[i]->dibujar();
	}
}

void GarabatoPuntos::borrar()
{
	for (int i = 0; i < ind; i++)
	{
		gotoxy(garabatoPuntos[i]->getX(), garabatoPuntos[i]->getY());
		garabatoPuntos[i]->borrar();
	}
}

