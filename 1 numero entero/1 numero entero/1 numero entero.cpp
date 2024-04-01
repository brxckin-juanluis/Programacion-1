
#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout << " Hola :D ingresau un numero entero:";
    cin >> numero;

    cout << "Aqui esta tu respuesta :D, los divisores exactos de " << numero << "son";
    for (int i = 1; i <= numero; ++i) {
        if (numero % i == 0) {
            cout << i << ",";
        }
    }
    cout << endl;
    return 0;
}
