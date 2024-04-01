#include <iostream>
#include <string>
using namespace std;

double conversormillasyardas(double cantidad);
double conversormillaspies(double cantidad);
double conversormillaspulgadas(double cantidad);

int main() {
    cout << "Buenaaaas :D, Por favor, seleccione una opción para convertir millas:" << endl;
    cout << "1. Milla a yarda" << endl;
    cout << "2. Milla a pies" << endl;
    cout << "3. Milla a pulgadas" << endl;

    int selec;
    double numero;
    cout << "Ingrese el número de la opción que desea seleccionar: ";
    cin >> selec;

    switch (selec) {
    case 1:
        cout << "Ingrese la cantidad de millas a convertir a yardas: ";
        cin >> numero;
        cout << "El resultado de la conversión de " << numero << " millas equivale a: " << conversormillasyardas(numero) << " yardas" << endl;
        break;
    case 2:
        cout << "Ingrese la cantidad de millas a convertir a pies: ";
        cin >> numero;
        cout << "El resultado de la conversión de " << numero << " millas equivale a: " << conversormillaspies(numero) << " pies" << endl;
        break;
    case 3:
        cout << "Ingrese la cantidad de millas a convertir a pulgadas: ";
        cin >> numero;
        cout << "El resultado de la conversión de " << numero << " millas equivale a: " << conversormillaspulgadas(numero) << " pulgadas" << endl;
        break;
    default:
        cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
        break;
    }

    return 0;
}

double conversormillasyardas(double cantidad) {
    double resultado = cantidad * 1760;
    return resultado;
}

double conversormillaspies(double cantidad) {
    double resultado = cantidad * 5280;
    return resultado;
}

double conversormillaspulgadas(double cantidad) {
    double resultado = cantidad * 63360;
    return resultado;
}
