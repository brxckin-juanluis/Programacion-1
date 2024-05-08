
#include <iostream>
using namespace std;

int main()
{
    int numeros[15];
    cout << "ingrese los numeros: " << endl;

    for (int i = 0; i < 15; i++) {
        cout << "Humano ingresa un numero en la posicion: " << i << endl;
        cin >> numeros[i];
    }
    for (int i = 0; i < 15; i++) {
        cout << "numero ingresado en la posicion " 
            << i << ": " << numeros[i] << endl;
    }
    return 0;
}
