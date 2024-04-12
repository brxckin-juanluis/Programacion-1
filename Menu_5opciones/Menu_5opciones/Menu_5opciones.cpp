// variable global menu de 5 opciones
#include <iostream>
using namespace std;

int opcionseleccionda;

void opcion1() {
    cout << " has seleccionado la opcion 1. Mensaje de la opcion 1." << endl;
}
void opcion2() {
    cout << " Has seleccionado la opcion 2. nada encontrado en este cofre 2." << endl; 
}void opcion3() {
    cout << " Has seleccionado la opcion 3. Eeeel elden ringggg 3." << endl;
}void opcion4() {
    cout << " Has seleccionado la opcion 4. has encontrado una espada de hierro 3lvl 4." << endl;
}void opcion5() {
    cout << " Has seleccionado la opcion 5. nada encontrado en este espacio 5." << endl;
}
int main()
{
    cout << "Menu:" << endl;
    cout << "Hola, opcion 1" << endl; 
    cout << "Hola, opcion 2" << endl;
    cout << "Hola, opcion 3" << endl;
    cout << "Hola, opcion 4" << endl;
    cout << "Hola, opcion 5" << endl;
    cout << "humano, selecciona una opcion: "; 
    cin>> opcionseleccionda;

    switch (opcionseleccionda) {
    case 1:
            opcion1();
            break;
        case 2:
                opcion2();
                break;
            case 3:
                    opcion3();
                    break;
                case 4:
                        opcion4();
                        break;
                    case 5:
                            opcion5();
                            break;
                    default:
                        cout << "opcion no valida humano." << endl;

 }
    return 0;
}


