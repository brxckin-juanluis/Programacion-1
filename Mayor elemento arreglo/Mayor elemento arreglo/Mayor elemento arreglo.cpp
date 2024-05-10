
#include <iostream>
using namespace std;

int main()
{
	int numeros[5];
	cout << "hOLA HUMANO, IngResA 5 NuMEros: " << endl;
	for (int i = 0; i < 5; ++i) {
		cout << "numero " << i + 1 << ": ";
		cin >> numeros[i];
	}
	int mayor = numeros[0];
	for (int i = 1; i < 5; ++i) {
		if (numeros[i] > mayor) {
			mayor = numeros[i];
		}
	}
	cout << " El mayor numero ingresado es: " << mayor << endl;

	return 0;
}
