#include "GraficoEnPantalla.h"



GraficoEnPantalla::GraficoEnPantalla(int tanMax)
{
	this->tanMax = tanMax;
	ind = 0;
	elementos = new ElementoGrafico* [tanMax];
}


GraficoEnPantalla::~GraficoEnPantalla()
{
	for (int i = 0; i < ind; i++)
	{
		delete elementos[i];
	}
	delete[] elementos;
}

void GraficoEnPantalla::dibujar()
{
	for (int i = 0; i < ind; i++)
	{
		elementos[i]->Dibujar();
	}
}

void GraficoEnPantalla::borrar()
{
	for (int i = 0; i < ind; i++)
	{
		elementos[i]->borrar();
	}
}

void GraficoEnPantalla::agregar()
{
	if (ind < tanMax)
	{
		char tipo;
		int numero;
		string nombre;
		fflush stdin;
		cout << "ingrese nombre del elemento grafico: ";
		cin >> nombre;
		fflush stdin;
		cout << "ingrese el numero de puntos o lineas: ";
		cin >> numero;
		fflush stdin;
		cout << "ingrese tipo puntos(p) o linea(l): ";
		cin >> tipo;
		elementos[ind] = new ElementoGrafico(nombre,numero, tipo);
		elementos[ind]->agregarFigura();
		ind++;
	}
	else
	{
		cout << "Modulo de Elementos Graficos lleno" << endl;
	}
}

void GraficoEnPantalla::eliminar()
{
	int aux;
	for (int i = 0; i < ind; i++)
	{
		cout << i << ". " << elementos[i]->getNombre() << endl;
	}
	cout << "---->";
	cin >> aux;
	delete elementos[aux];
	ind--;
}



