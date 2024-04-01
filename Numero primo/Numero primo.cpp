#include <iostream>
using namespace std;

int main() {
   int numero;
   cout << "Hola :D, Ingresa un numero: ";
    cin >> numero;

    bool primo = true;


    if (numero <= 1 || numero == 4) {
        primo = false;
    }
    else {

        for (int i = 2; i * i <= numero; ++i) {
            if (numero % i == 0) {
                primo = false;
            }
        }
    }

    if (primo) {
        cout << " numero " << numero << " es primo." << endl;
    }
    else {
        cout << " numero " << numero << " no es primo." << endl;
    }

    return 0;
}