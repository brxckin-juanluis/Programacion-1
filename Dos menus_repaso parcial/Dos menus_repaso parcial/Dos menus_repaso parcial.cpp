#include <iostream>
#include <windows.h> 

using namespace std;
void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main() {
    int opcion;
    char palabra[50];
    int x, y;
    int numero;

    do {
        system("cls");

        cout << "Menu Principal:" << endl;
        cout << "1. Ingresar dos numeros para mostrarte 'Hola mundo desde gotoxy'" << std::endl;
        cout << "2. Ingresar un numero (aparecera en el centro de la consola)" << std::endl;
        cout << "3. Ingresar una palabra (aparecera 10 veces en cualquier parte)" << std::endl;
        cout << "4. Desea ir al segundo menu" << std::endl;
        cout << "5. Salir" << std::endl;
        cout << "Humano escoge una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Humano, Ingrese coordenadas (x, y): ";
            cin >> x >> y;
            gotoxy(x, y);
            cout << "hola Humanos desde gotoxy" << endl;
            break;
        case 2:
            cout << "Humano Ingrese un numero: ";
            cin >> numero;
            gotoxy(40, 12);
            cout << "Numero Ingresado: " << numero << endl;
            break;
        case 3:
            cout << "Humano, Ingrese una palabra: ";
            cin >> palabra;
            for (int i = 0; i < 10; ++i) {
                gotoxy(rand() % 80, rand() % 24);
                cout << palabra << endl;
            }
            break;
        case 4:
            system("cls");
            cout << "menu 2:" << endl;
            cout << " 1.Humano, imprimir un caracter ASCII mas raro" << endl; 
            cout << " 2. Saludar a un compañero" << endl;
            cout << "3. Regresar al menu principal" << endl;
            cout << "Humano escoja una opcion porfavor: ";
            cin >> opcion;
            if (opcion == 1) {
                gotoxy(30, 30);
                cout << "\x01";
            }
            else if (opcion == 2) {
                cout << "EY, Que tal Compañero!!" << endl;
            }
            break;
        case 5:
            cout << "hasta luego humano!!" << endl;
            break;
        default:
            cout << "opcion invalida. intentalo de nuevo humano." << endl;
        }  
        system("pause");
    } while (opcion != 5);

    return 0;
}