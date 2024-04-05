

#include <iostream>
using namespace std;
//ciclo infinito: Menu 
int main()
{
	int control = 1;

	do {
		cout << "Hola humano.";
		cout << endl << "bienvenido a tu ciclo";
		cout << endl << "¿desea salir del ciclo de tu vida, te sientes comodo con ello? 1. si, 2. no ";
		cin >> control;
	} while (control == 1); 
	cout << "Salimos del ciclo, felicidades";
	return 0; 
}
