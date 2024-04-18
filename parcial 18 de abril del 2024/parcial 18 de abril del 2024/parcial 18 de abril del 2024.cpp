#include <iostream>
#include <cstdlib>

using namespace std;

void calculahipotenusa() {
	double lado_opuesto, lado_adyacente;
	cout << "Hola Humano, ingrese el lado opuesto: ";
	cin >> lado_opuesto;
	cout << "Hola Humano, ingrese el lado adyacente: ";
	cin >> lado_adyacente;
	double hipotenusa = sqrt(pow(lado_opuesto, 2) + pow(lado_adyacente, 2));
	cout << "La hipotenusa es: " << hipotenusa << endl;
}

void calculaangulofaltante() {
	double angulo1, angulo2;
	cout << " Hola humano ingrese el valor del primer angulo: ";
	cin >> angulo1;
	cout << "Humano, ingrese el valor del segundo angulo: ";
	cin >> angulo2;
		double angulo_faltante = 180 - (angulo1 + angulo2);
	cout << "Humano el Angulo faltante es: " << angulo_faltante << endl;
}
int calculafactorial(int n) {
	if (n == 0 || n == 1)
		return 1;
	else
		return n * calculafactorial(n - 1);
}
void calculavuelto() {
	int dinero_dado, cantidad_gastada;
	cout << "Humano, Ingrese la cantidad de dinero dado: ";
	cin >> dinero_dado;
	cout << "Ahora,Ingresa el dinero gastado: ";
	cin >> cantidad_gastada;
	while (dinero_dado > cantidad_gastada) {
		cout << "La cantidad que gasto es mayor al dinero dado, Intentalo nuevamente" << endl;
		cout << "Humano,ingrese la cantidad de dinero dado: ";
		cin >> dinero_dado;
		cout << "Humano ahora Ingrese la cantidad gastada: ";
		cin >> cantidad_gastada;
	}
	int vuelto = dinero_dado - cantidad_gastada;
	cout << "tu vuelto es: " << vuelto << endl;

}
int main() {
	int opcion;
	do {
		system("dear");
			
		cout << "Menu:" << endl;
		cout << "1.Calcula la hipotenusa de un triangulo" << endl;
		cout << "2. calcula del angulo faltante de un triangulo" << endl;
		cout << "3. calcula del factorial de un numero" << endl;
		cout << "4. calcular tu vuelto." << endl;
		cout << "5. salir" << endl;
		cout << " Humano Ingresa tu opcion jijij: ";
		cin >> opcion; 

		switch (opcion) {
		case 1:
			calculahipotenusa();
			break;
		case 2:
			calculaangulofaltante();
			break;
		case 3: {
			int numero; 
			cout << "ingrese un numero para calcular su factorial bro: ";
			cin >> numero;
			cout << " el factorial de " << numero << " es " << calculafactorial(numero) << endl;
			break;
		}
		case 4:
			calculavuelto();
			break;
		case 5:
			cout << "Expulsando del programa, Hasta pronto!!" << endl;
			break;
		default:
			cout << "Humano, Opcion invalida intentalo de nuevo jiji" << endl;
		}
		cout << "humano presiona enter por si desear continuar?¿?";
		cin.ignore();
		cin.get();
	} while (opcion != 5);
	return 0;
}