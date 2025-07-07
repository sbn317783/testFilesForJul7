#include <iostream>
#include "headerFiles/nombre.h"
using namespace std;

void pedirNombre(Jugador &jugador) {
    cout << "Ingrese su nombre: ";
    getline(cin, jugador.nombreJugador);
}