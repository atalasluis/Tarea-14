#include "GraficoEnPantalla.h"


int main()
{
	GraficoEnPantalla grafico(5);
	int op;
	do
	{
		cout << "1. Agregar Fibura" << endl;
		cout << "2. Dibujar Figuras y Borrar Despues de 10 Seg." << endl;
		cout << "3. Eliminar Figura" << endl;
		cout << "100. Para Salir" << endl;
		cout << "------->";
		cin >> op;

		switch (op)
		{
		case 1:
			//Agregar
			system("cls");
			grafico.agregar();
			break;
		case 2:
			//dibujar
			system("cls");
			grafico.dibujar();
			Sleep(10000);
			grafico.borrar();
			break;
		case 3:
			//borrar
			system("cls");
			grafico.eliminar();
			break;
		
		default:
			break;
		}
	} while (op < 100);

}
