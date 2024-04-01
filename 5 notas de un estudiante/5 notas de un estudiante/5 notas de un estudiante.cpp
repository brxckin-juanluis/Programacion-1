// 5 notas de un estudiante.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int p, nota1, nota2, nota3, nota4, nota5;
    float promedio = 0;
    string n;
    
    cout << "Hola bienvenido, ingresa tu nombre:";
    cin >> n;
    cout << "Ingrese la primera nota:";
    cin >> nota1;
    cout << "Ingrese la segunda nota:";
    cin >> nota2;
    cout << "ingrese la tercera nota:";
    cin >> nota3;
    cout << " ingrese la cuarta nota:";
    cin >> nota4;
    cout << "ingrese la quinta nota:";
    cin >> nota5;
    p = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
    cout << "\n" << endl; 
    cout << "\n" << endl;
    cout << "alumno:" << n << endl;
    cout << " promedio obtenido es de:" << p << endl;

    
}
