#pragma once
#include "Linea.h"
class GarabatoLineas
{
private:
	Linea** garabatoLineas;
	int tamMax;
	int ind;
public:
	GarabatoLineas(int tamMax);
	~GarabatoLineas();
	void registrar();
	void dibujar();
	void borrar();
};

