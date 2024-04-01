// Promedio de la nota.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	int n1;
	int n2;
	int n3;
	cout << "Hola, calcularemos el promedio de tus notas" << endl;
	cout << "podrias brindarme la primera nota:";
	cin >> n1;
	cout << "brindame la segunda nota:";
	cin >> n2;
	cout << "brindame la tercera nota";
	cin >> n3;
	float promedio = (n1 + n2 + n3) / 3;
	if (n1 < 61 || n2 < 61 || n3 < 61) {
		cout << " debes de tener tus cursos en limpio" << endl;
	}
	cout << "la primera nota es" << n1 << endl;
	cout << "la segunda nota es" << n2 << endl;
	cout << "la tercera nota es" << n3 << endl;
	cout << "tu promedio seria de: " << promedio << endl;
}


