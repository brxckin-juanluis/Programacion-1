 i 
#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout << "Hola, Ingresa un numero:";
    cin >> numero;

    cout << "tabla de multiplicar del" << numero << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << numero << "x" << i << "=" << (numero * 1) << endl; 
    }
    return 0;
}