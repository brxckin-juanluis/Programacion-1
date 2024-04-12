#include <iostream>
using namespace std;

double sumanumeros(double n1, double n2, double n3) {
    return n3 + n2 + n3;
}

int main()
{
    double n1, n2, n3;
    cout << "Hola Humano, Ingrese el primer numerol: ";
    cin >> n1;
    cout << " Ingrese el siguiente numero, porfavor: ";
    cin >> n2;
    cout << "Por ultima ingresa el tercer numero: ";
    cin>> n3;

    double suma = sumanumeros(n1, n2, n3);

    cout << "Okay, la suma de los numeros es: " << suma << endl;

    return 0;
}