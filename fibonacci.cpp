

#include <iostream>
using namespace std;
// ejercicio de fibonacci
int fibonacci(int n) {
    int prev = 0;
    int curr = 1;
    int next;
    if (n <= 1)
        return n;
    for (int i = 2; i <= n; ++i) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}
int main()
{
    int n;
    cout << "Hola Bienvenido, ingrese el numero e terminos de la serie de fibonacci que desea calcular: ";
    cin >> n;

    cout << " la serie de fibonacci hasta el termino" << n << "es:\n";
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}



