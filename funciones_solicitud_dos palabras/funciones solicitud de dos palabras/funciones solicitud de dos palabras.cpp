
#include <iostream>
#include <string>

using namespace std;

string unionpalabras(string p1, string p2) {
    return p1 +" " + p2;
}

int main()
{
    string p1, p2;
    cout << "Hola Humano, Ingrese la primera palabra: ";
    cin >> p1;
    cout << " Ingresa la siguiente palabra porfavor: ";
    cin >> p2;

    string palabrasunion = unionpalabras(p1, p2);

    cout << "Okay, las palabras unidas son: " << palabrasunion << endl; 

    return 0;
}


