#include <iostream>

using namespace std;


void encontrarMultiplos(int numero) {
    cout << "Multiplos de " << numero << ": ";
    for (int i = 1; i <= 10; ++i) {
        cout << numero * i << " ";
    }
    cout << endl;
}

void calcularFactorial(int numero) {
    int factorial = 1;
    for (int i = 1; i <= numero; ++i) {
        factorial *= i;
    }
    cout << "Factorial de " << numero << ": " << factorial << endl;
}


void calcularFibonacci(int numero) {
    cout << "Serie Fibonacci hasta " << numero << ": ";
    int a = 0, b = 1, c;
    cout << a << " " << b << " ";
    for (int i = 2; i < numero; ++i) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}

int main() {
    int numero, accion;

    cout << "Hola Humano, brindame un numero: ";
    cin >> numero;

    cout << "Okay, escoge la opcion: " << endl;
    cout << "1. Encontrar todos los multiplos del numero." << endl;
    cout << "2. Calcular el factorial del numero." << endl;
    cout << "3. Calcular la serie Fibonacci del numero." << endl;
    cout << "Ingresa aqui la accion: ";
    cin >> accion;

    switch (accion) {
    case 1:
        encontrarMultiplos(numero);
        break;
    case 2:
        calcularFactorial(numero);
        break;
    case 3:
        calcularFibonacci(numero);
        break;
    default:
        cout << "Ups, opcion no valida humano..." << endl;
    }

    return 0;
}
