#include <iostream>
#include <string> 
using namespace std;
int main()
{
    string password;
    double numero;

    cout << " Humano Ingresa una contrasena numerica porfavor: ";
    cin >> password;

    cout << " Hola Humano Ingrese un numero cualquiera: ";
    cin >> numero;
    double numericpassword = stoi(password);

    double sumresultado = numericpassword + numero;
    cout << "operacion de suma: " << numericpassword << "+" << numero << "=" << sumresultado << endl;

    double finalresultado = sumresultado * numero;
    cout << "operacion de multiplicacion: " << sumresultado << "*" << numero << "=" << finalresultado << endl;

    cout << "Humano Contrasena Cifrada: " << finalresultado << endl;

    return 0;
}