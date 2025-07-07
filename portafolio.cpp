#include <iostream>
#include "headerFiles/portafolio.h"

using namespace std;

void Portfolio::agregar(const Evidence& e) {
    evidencias.push_back(e);
    cout << " Evidencia agregada al portafolio: " << e.nombre << endl;
}

void Portfolio::mostrar() const {
    cout << "\n Portafolio de evidencias:\n";
    if (evidencias.empty()) {
        cout << "Aún no hay evidencias guardadas.\n";
    } else {
        for (size_t i = 0; i < evidencias.size(); ++i) {
            cout << i + 1 << ". " << evidencias[i].nombre << ": " << evidencias[i].descripcion << endl;
 }
}
}