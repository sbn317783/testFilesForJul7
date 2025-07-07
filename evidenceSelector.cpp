#include "headerFiles/evidenceSelector.h"
#include "headerFiles/evidencia.h"
#include "headerFiles/Jugador.h"
#include "headerFiles/estadoJuicio.h"

using namespace std;

void selectEvidence(EstadoJuicio& estado) {
    int optionEvidencia2;
    char confirm2;
    bool opcionesUsadas[7] = {false};
    Jugador miJugador;

    cout << "Con esto en mente, tu que piensas, que evidencia podriamos usar para mostrar mi inocencia en este caso. 1-6 \n";

    do {
        cout << "Selecciona una opción (1-6) o 0 para salir: \n";
        cout << "1. Nombre de la evidencia: No status de la creatura. 6 puntos \n2. Nombre de la evidencia: Testimonio de la creatura. 8 puntos \n3. Nombre de la evidencia: Propio Testimonio de la Victima. 2 puntos \n";
        cout << "4. Nombre de la evidencia: Diario de Victor. 6 puntos \n5. Nombre de la evidencia: Testimonio de Padre Vander. 2 puntos \n6. Nombre de la evidencia: Argumento bien comun. 4 puntos \n";
        cout << "Total puntos acumulados: " << estado.totalPoints << endl;

        cin >> optionEvidencia2;

        if (optionEvidencia2 == 0) {
            cout << "Estás seguro que deseas salir? (s/n): \n";
            cin >> confirm2;
            confirm2 = tolower (confirm2);
            if (confirm2 == 's') {
                break; 
            } else {
                continue;
            }
        }

    bool use = opcionesUsadas[optionEvidencia2];
        if (use) {
            cout << "\nYa seleccionaste esta evidencia. Elige otra distinta.\n";
            continue;}

        
        switch (optionEvidencia2) {
            case 1:
                estado.seleccionadas.push_back(C1E1);
                estado.totalPoints += C1E1.puntosPosibles = 6;
                break;
            case 2:
                estado.seleccionadas.push_back(C1E2);
                estado.totalPoints += C1E2.puntosPosibles = 8;
                break;
            case 3:
                estado.seleccionadas.push_back(C1E3);
                estado.totalPoints += C1E3.puntosPosibles = 2;
                break;
            case 4:
                estado.seleccionadas.push_back(C1E4);
                estado.totalPoints += C1E4.puntosPosibles = 6;
                break;
            case 5:
                estado.seleccionadas.push_back(C1E5);
                estado.totalPoints += C1E5.puntosPosibles = 2;
                break;
            case 6:
                estado.seleccionadas.push_back(C1E6);
                estado.totalPoints += C1E6.puntosPosibles = 4;
                break;
            default:
                cout << "Opción invalida. Elige una opción entre 1-6.\n";
        }

        opcionesUsadas[optionEvidencia2] = true; // opcion como usada

        if (estado.totalPoints > 16) {
            cout << "Sobrepasaste el límite de 16 puntos.\n";
            estado.seleccionadas.clear();
            estado.totalPoints = 0;
        
        
        for (int i = 1; i <= 6; ++i) {      // se reinician las opciones
            opcionesUsadas[i] = false;
        }
    }

    } while (true);

    cout << "Selección finalizada. Total de puntos: " << estado.totalPoints << endl;
}