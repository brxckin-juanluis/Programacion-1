#include <iostream>
using namespace std;

int main()
{
    int nmeros[5];
    int suma = 0;
    cout << "Hola Humano, ingresa 5 numeros: " << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "numero " << i + 1 << ": ";
        cin >> nmeros[i];

        suma += nmeros[i];
    }
    cout << "la suma de los numeros es: " << suma << endl;

    return 0;
}