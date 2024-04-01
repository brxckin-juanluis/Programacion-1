
#include <iostream>
using namespace std;

int main()
{
    int numero;
    int suma = 0;

    cout << "Saludos :D, Ingrese un numero:";
        cin >> numero;
    if (numero % 2 == 0) {
        for (int i = 0; i <= numero; i++) {
            if (i % 2 != 0)
                suma += i;
        }
    }
    else {
        for (int i = 0; i <= numero; i++) {
            if (i % 2 == 0)
                suma += i;
        }
    }
    cout << "la suma de los numeros es:" << suma << endl;

}