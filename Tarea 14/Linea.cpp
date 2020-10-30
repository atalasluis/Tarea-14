#include "Linea.h"



Linea::Linea(char orientacion, int tamaño, int x, int y):cordenadas(x, y)
{
	
	this->orientacion = orientacion;
	this->tamaño = tamaño;
}


Linea::~Linea()
{
}

void Linea::dibujar()
{
	if (orientacion == 'h')
	{
		cordenadas.setCaracter(301);
		for (int i = 0; i < tamaño; i++)
		{
			gotoxy( cordenadas.getX() + i, cordenadas.getY());
			cordenadas.dibujar();
		}
	}
	
	if (orientacion == 'v')
	{
		cordenadas.setCaracter(124);
		for (int i = 0; i < tamaño; i++)
		{
			gotoxy(cordenadas.getX(), cordenadas.getY() + i);
			cordenadas.dibujar();
		}
	}

}

void Linea::borrar()
{
	if (orientacion == 'h')
	{
		for (int i = 0; i < tamaño; i++)
		{
			gotoxy(cordenadas.getX() + i, cordenadas.getY());
			cordenadas.borrar();
		}
	}

	if (orientacion == 'v')
	{
		for (int i = 0; i < tamaño; i++)
		{
			gotoxy(cordenadas.getX(), cordenadas.getY() + i);
			cordenadas.borrar();
		}
	}
}

