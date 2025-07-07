#ifndef portafolio_h
#define portafolio_h

#include <string>
#include <vector>

struct Evidence {
    std::string nombre;
    std::string descripcion;
};

struct Portfolio {
    std::vector<Evidence> evidencias;

    void agregar(const Evidence& e);
    void mostrar() const;
};

#endif