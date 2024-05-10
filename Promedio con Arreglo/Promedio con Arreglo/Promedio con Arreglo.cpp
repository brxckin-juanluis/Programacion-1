
#include <iostream>
using namespace std;

int main()
{
	double numeros[5];
	double suma = 0.0;

	cout << "HOla hUManO, Ingrese 5 numeros: " << endl;
	for (int i = 0; i < 5; ++i) {
		cout << "numero" << i + 1 << ": ";
		cin >> numeros[i];
		suma +=numeros[i];
	}
	double promedio = suma / 5.0;

		cout << "eL promerio Ingresado de los numeros es: " << promedio << endl;

	return 0;
}
