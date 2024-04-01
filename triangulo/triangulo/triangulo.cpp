// triangulo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	int lg1;
	int lg2;
	int lg3;
	cout << "Calcularemos la forma del triangulo" << endl;
	cout << "Cuanto mide el primer lado del triangulo" << endl;
	cin >> lg1;
	cout << "Cuanto mide el segundo lado del triangulo" << endl;
	cin >> lg2;
	cout << "cuanto mide el tercer lado del triangulo" << endl;
	cin >> lg3;
	if (lg1 == lg2 && lg2 == lg3 && lg3 == lg1) {
		cout << "el triangulo es equilatero" << endl;
	}
	else if (lg1 == lg2 || lg1 == lg3 || lg2 == lg3) {
		cout << "el triangulo es isosceles " << endl;
	}
	else {
		cout << " el triangulo es escaleno" << endl;
	}
}
