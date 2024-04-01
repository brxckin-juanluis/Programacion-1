#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	//Bono navideño 
	int t {}, s, a, d;
	cout << "Ingrese los anios trabajados:"; 
		cin >> a; 
	cout << "Ingrese el salario que ingresa:";
			cin >> s;
			if (a <= 1 || a <= 5) {
				cout << "Su salario total es de:" << t << endl;
			}
			else if (a > 5) {
				d = (a * 10) / 100;
				cout << "Su salario total es de:" << d << endl;

			}
	return 0;
} 