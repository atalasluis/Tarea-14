#include "GarabatoLineas.h"



GarabatoLineas::GarabatoLineas(int tamMax)
{
	this->tamMax = tamMax;
	ind = 0;
	garabatoLineas = new Linea* [tamMax];
}


GarabatoLineas::~GarabatoLineas()
{
	for (int i = 0; i < ind; i++)
	{
		delete garabatoLineas[i];
	}
	delete[] garabatoLineas;
}

void GarabatoLineas::registrar()
{
	if (ind < tamMax)
	{
		int x, y, tamaño;
		char orientacion;
		cout << "ingrese cordenada x: ";
		cin >> x;
		fflush stdin;
		cout << "ingrese cordenada y: ";
		cin >> y;
		fflush stdin;
		cout << "ingrese cordenada tamaño: ";
		cin >> tamaño;
		fflush stdin;
		cout << "ingrese cordenada orientacion (h) o (v): ";
		cin >> orientacion;
		fflush stdin;
		garabatoLineas[ind] = new Linea(orientacion, tamaño, x, y);
		ind++;
	}
	else
	{
		cout << "Modulo de puntos lleno" << endl;
	}
}

void GarabatoLineas::dibujar()
{
	for (int i = 0; i < ind; i++)
	{
		garabatoLineas[i]->dibujar();
	}
}

void GarabatoLineas::borrar()
{
	for (int i = 0; i < ind; i++)
	{
		garabatoLineas[i]->borrar();
	}
}
