#include <iostream>
using namespace std;
//ejercicio de calculadora ciclo infinito
int main()
{
	char opcion;
	float num1, num2, resultado;
	do {
		cout << "hola humano,este es el menu de esta calculadora: " << endl;
		cout << "1.suma" << endl;
		cout << "2. resta" << endl;
		cout << "3. multiplicacion" << endl;
		cout << "4. division" << endl;
		cout << "ingrese la opcion que desea: ";
		cin >> opcion;

		switch (opcion) {
		case '1':
			cout << "ingrese el primer numero: ";
			cin >> num1;
			cout << "ingrese el segundo numero: ";
			cin >> num2;
			resultado = num1 + num2;
			cout << "El resultado de la suma es: " << resultado << endl;
			break;
		case '2':
			cout << "ingrese el primer numero: ";
			cin >> num1;
			cout << "ingrese el segundo numero: ";
			cin >> num2;
			resultado = num1 - num2;
			cout << "El resultado de la resta es: " << resultado << endl;
			break;
		case '3':
			cout << "ingrese el primer numero: ";
			cin >> num1;
			cout << "ingrese el segundo numero: ";
			cin >> num2;
			resultado = num1 * num2;
			cout << "El resultado de la multiplicacion es: " << resultado << endl;
			break;
		case '4':
			cout << "ingrese el primer numero: ";
			cin >> num1;
			cout << "ingrese el segundo numero: ";
			cin >> num2;
			if (num2 != 0) {
				resultado = num1 / num2;
				cout << "El resultado de la division es: " << resultado << endl;
			}
			else {
				cout << "no se puede dividir entre cero :(" << endl;
			}
			break;
		default:
			cout << "opcion no valida :( porfavor ingrese una opcion valida (1-4)" << endl;
			break;
		}
		cout << "¿desea ingresar otra operacion? s, n: ";
		cin >> opcion;
	} while (opcion == 's' || opcion == 's');
		cout << " okay :D, nos vemooos!!" << endl;

	return 0;
}
	 
