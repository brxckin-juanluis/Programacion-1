#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

char board[3][3];

void initializeBoard() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        cout << endl;
        if (i < 2) cout << "---------" << endl;
    }
}

bool hasGanado(char player) {
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}

bool estaLleno() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') return false;
        }
    }
    return true;
}

void mapInputToRowCol(int input, int& row, int& col) {
    switch (input) {
    case 1: row = 2; col = 0; break;
    case 2: row = 2; col = 1; break;
    case 3: row = 2; col = 2; break;
    case 4: row = 1; col = 0; break;
    case 5: row = 1; col = 1; break;
    case 6: row = 1; col = 2; break;
    case 7: row = 0; col = 0; break;
    case 8: row = 0; col = 1; break;
    case 9: row = 0; col = 2; break;
    default: row = -1; col = -1; break;
    }
}

int main() {
    string jugador1, jugador2;
    char actualjugador;
    int row, col, input;
    bool juegoperdido = false;

    cout << "Hola, Humano. Ingrese el nombre del jugador 1: ";
    cin >> jugador1;
    cout << "Ahora ingresa el nombre del jugador 2: ";
    cin >> jugador2;

    srand(time(0));
    int dice = rand() % 6 + 1;
    if (dice % 2 == 0) {
        actualjugador = 'X';
        cout << jugador1 << " empieza con X" << endl;
    }
    else {
        actualjugador = 'O';
        cout << jugador2 << " empieza con O" << endl;
    }

    initializeBoard();

    while (!juegoperdido) {
        printBoard();
        cout << "Turno de " << (actualjugador == 'X' ? jugador1 : jugador2) << " (" << actualjugador << "): " << endl;
        cout << "Humano, ingresa una posición del 1 al 9: ";
        cin >> input;

        mapInputToRowCol(input, row, col);

        if (row != -1 && col != -1 && board[row][col] == ' ') {
            board[row][col] = actualjugador;

            if (hasGanado(actualjugador)) {
                printBoard();
                cout << "¡" << (actualjugador == 'X' ? jugador1 : jugador2) << " (" << actualjugador << ") gana!" << endl;
                juegoperdido = true;
            }
            else if (estaLleno()) {
                printBoard();
                cout << "Wow, humanos, es un empate." << endl;
                juegoperdido = true;
            }
            else {
                actualjugador = (actualjugador == 'X' ? 'O' : 'X');
            }
        }
        else {
            cout << "Movimiento inválido, humano. Inténtalo de nuevo." << endl;
        }
    }

    char jugardenuevo;
    cout << "¿Desea jugar de nuevo, humano? (s/n): ";
    cin >> jugardenuevo;
    if (jugardenuevo == 's' || jugardenuevo == 'S') {
        main();  
    }

    return 0;
}

