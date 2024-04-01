#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	//Ganar curso
	int cond1;
	cout << "¿Quiero ganar el curso" << endl << "1. Si 2. No";
	cin >> cond1;

	if (cond1 == 1) {
		cout << "realiza las tareas, ¿Hago correctamente las tareas" << endl << "1. Si 2. No";
		int carro;
		cin >> carro;
		if (carro == 1) {
			cout << "acumolo zona, me encuentro listo para el parcial?" << endl << "1. Si 2. No";
			int trafico;
			cin >> trafico;
			if (trafico == 1) {
				cout << "Gane el parcial, ¿Listo para examen final?" << endl << "1. Si 2. No";
				int vias;
				cin >> vias;
				if (vias == 1) {
					cout << "gane el examen final" << endl << "1. Si 2. No";
					int vias_disp;
					cin >> vias_disp;
					if (vias_disp == 1) {
						cout << "Acumele zona, Gane el curso?" << endl << "1. Si 2. No";
						int calle;
						cin >> calle;
						if (calle == 1)
					 {
							cout << "Felicidades ganaste el curso";

						}
					else {
						cout << "Pierdo el curso";
					}
				}
				else {
					cout << "Pierdo el curso";
				}
			}
			else {
				cout << "Pierdo parciales";
			}

		}
		else {
			cout << "Pierdo parciales y el curso";
		}


	}
	else {
		cout << "Pierdo el curso";
	}
}
 else {
	 cout << "Pierdo el curso y repito";
	}
	return 0;
}

