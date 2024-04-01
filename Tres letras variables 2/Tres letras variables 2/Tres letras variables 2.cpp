#include <iostream>
#include <string>

using namespace std;


bool es_vocal(char letra) {
    return (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U');
}

int main() {
    char letra1, letra2, letra3;

   
    cout << "Ingrese la primera letra: ";
    cin >> letra1;
    cout << "Ingrese la segunda letra: ";
    cin >> letra2;
    cout << "Ingrese la tercera letra: ";
    cin >> letra3;

    int contador_vocales = 0;
    string vocales;
    if (es_vocal(letra1)) {
        contador_vocales++;
        vocales += letra1;
    }
    if (es_vocal(letra2)) {
        contador_vocales++;
        
        if (!vocales.empty()) {
            vocales += ", ";
        }
        vocales += letra2;
    }

    if (es_vocal(letra3)) {
        contador_vocales++;
        if (!vocales.empty()) {
            vocales += ", ";
        }
        vocales += letra3;
    }
    if (contador_vocales >= 2) {
        cout << "Hay dos vocales entre las letras ingresadas, y son: " << vocales << endl;
    }
    else {
        cout << "No hay suficientes vocales." << endl;
        return 0;
 
    }