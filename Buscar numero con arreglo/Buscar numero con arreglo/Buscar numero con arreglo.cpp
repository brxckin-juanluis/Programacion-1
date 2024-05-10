
#include <iostream>
using namespace std;

int main()
{
	int numeros[10];
	int numerobuscado;
	bool encontrado = false;
	cout << "HolA hUmAno, iGResa 10 numeros diferentes: " << endl;
	for (int i = 0; i < 10; ++i) {
		cout << "Numero " << i + 1 << ": ";
		cin >> numeros[i];
	}
	cout << "Humano ahora ingresa un numero por buscar: ";
	cin >> numerobuscado;

	for (int i = 0; i < 10; ++i) {
		if (numeros[i] == numerobuscado) {
			encontrado = true;
			break;
		}
	}
	if (encontrado) {
		cout << " Felicidade humano el numero si existe en el arreglo." << endl;
	}
	else {
		cout << "QUe mal HumaNO, El numero no es existente en el arreglo." << endl;
	}
	return 0;
}