
#include <iostream>
using namespace std;

int main()
// ejercicio switch/case structures 
{
	int num1;

	cout << "ingrese un numero";
	cin>> num1;

	switch(num1) {
		case 1:
		case 3:
			cout << "area comun: " << endl; 
			break;
			case 5:
			case 7:
				cout << " area especifica" << endl;
				break;
			default:
				cout << " no nos encontramos en ese semestre" << endl;
					break;
	}
		
	return 0; 
}
