#include <iostream>
using namespace std;

int main()
{
    int anio;
    cout << "ingrese un año";
    cin >> anio;
    bool esbisiesto(int anio);
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {

        if (esbisiesto(anio)) {
            cout << anio << "es un año bisiesto" << endl;
        }
        else {
            cout << anio << "no es un año bisiesto" << endl;
        }
    }

}