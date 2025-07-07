#ifndef evidencia_h
#define evidencia_h

#include <iostream>
#include <string>
using namespace std;

struct Evidencia{
string nombreEvidencia;
    int puntosPosibles;
    int puntosMoralidad;
    int tiempo;
    string txtfileEvidencia;
    string pregunta1a,pregunta1b, pregunta2a,pregunta2b,  pregunta3a, pregunta3b, pregunta4, pregunta5, pregunta6;
    void imprimir(); 
};

void menuEvidence ();

extern Evidencia C1E1, C1E2, C1E3, C1E4, C1E5, C1E6; 

#endif
