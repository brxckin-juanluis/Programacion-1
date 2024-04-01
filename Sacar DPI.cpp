
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	cout << "ingrese su edad:";
	int edad;
	cin >> edad;
	if (edad >= 18) {
		cout << "Si es mayor de edad, ir a renap";
		cout << endl;
	}
	else {
		cout << "No, es mayor de edad, no puede sacar dpi.";
	}
		cout << "tengo constancia de nacimiento 1. si, 2. no";
		int constancia; 
		cin >> constancia; 
		if (constancia == 1) {
			cout << "Si hay constancia, pagar dpi.";
			cout << endl;
		}
		else {
			cout << " No, estoy registrado, no puede pagar dpi.";
		}
		cout << " ¿ya pago la boleta? 1.si, 2. no.";
		int boleta;
		cin >> boleta;
		if (boleta == 1) {
			cout << "presentar la constancia de pago, completar el formulario. ";
		}
		else {
			cout << "dirijase a pagar la boleta";
		}
		cout << "entregan el dpi 1. 1 semana, 2. En 3 dias.";
		int tiempo;
		cin >> tiempo;
		if (tiempo <= 2) {
			cout << "En 3 Dias le entregan el dpi.";
		}
		else {
			cout << " En una semana te entregan el dpi";
		}
	return 0;
}
