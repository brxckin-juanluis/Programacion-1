// tres letras variables.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

#include <iostream>
#include <string>

using namespace std;

int main() {
    char letra1, letra2, letra3;

    cout << "Coloca la primera letra:";
    cin >> letra1;
    cout << "Coloca la segunda letra:";
    cin >> letra2;
    cout << "Y de ultima la tercera:";
    cin >> letra3;

    int contadordevocales = 0;
    string vocales = "";

    if (letra1 == 'a' || letra1 == 'e' || letra1 == 'i' || letra1 == 'o' || letra1 == 'u' ||
        letra1 == 'A' || letra1 == 'E' || letra1 == 'I' || letra1 == 'O' || letra1 == 'U') {
        contadordevocales++;
        vocales += letra1;
    }

    if (letra2 == 'a' || letra2 == 'e' || letra2 == 'i' || letra2 == 'o' || letra2 == 'u' ||
        letra2 == 'A' || letra2 == 'E' || letra2 == 'I' || letra2 == 'O' || letra2 == 'U') {
        contadordevocales++;
        vocales += letra2;
    }

    if (letra3 == 'a' || letra3 == 'e' || letra3 == 'i' || letra3 == 'o' || letra3 == 'u' ||
        letra3 == 'A' || letra3 == 'E' || letra3 == 'I' || letra3 == 'O' || letra3 == 'U') {
        contadordevocales++;
        vocales += letra3;
    }

    if (contadordevocales >= 2) {
        cout << "hay dos vocales entre las letras ingresadas, y son: " << vocales << endl;
    }
    else {
        cout << "no hay suficientes vocales" << endl;
    }

    return 0;
}
