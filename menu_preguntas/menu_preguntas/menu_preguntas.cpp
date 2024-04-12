#include <iostream>
#include <string>
using namespace std;
void imprimirnumero(int numero) {
    cout << "el numero ingresado es: " << numero << endl;
}
void imprimirpalabras(string palabras) {
    cout << "La palabra seleccionada es: " << palabras << endl; 
}
void imprimirletras(char letra) {
    cout << "La letra ingresada es: " << letra << endl;
}
int main()
{
    char opcion;
    do {
        cout << "1. Dame un numero: " << endl;
        cout << "2. Dame una palabra : " << endl;
        cout << "3. Dame una letra: " << endl;
        cout << "Humano selecciona la opcion: ";
        cin >> opcion;
        switch (opcion) {
        case '1': {
            int numero;
            cout << "Ingrese su numero: ";
            cin>> numero;
            imprimirnumero(numero);
            break;
        }
        case'2': {
            string palabra;
            cout << "Ingrese una palabra: ";
            cin >> palabra;
            imprimirpalabras(palabra);
            break;
        }case '3': {
            char letra;
            cout << "ingrese una letra: ";
            cin >> letra;
                imprimirletras(letra);
                break;
        }
        default :
            cout << "Opcion no valida humano." << endl;
            }
        cout << "desea continuar ? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 's');
    return 0;
}
