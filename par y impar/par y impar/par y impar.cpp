// par y impar.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	int numero;
	cout << " brindame un numero y lo calculare si es positio o negativo y si es par o impar" << endl;
	cin >> numero;
	if (numero > 0) {
		if (numero % 2 == 0) {
			cout << numero << "el numero es positivo y es par" << endl;
		else{
			cout << numero << " el numero es positivo y es impar" << endl;
		}
	else if (numero < 0) {
		if (numero % 2 == 0) {
			cout << numero << " el numero es negativo y es par" << endl;
		}
		else {
			cout << numero << " el numero es nagativo y es impar" << endl;
				}
			}
		}
	}
}
