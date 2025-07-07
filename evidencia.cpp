#include <iostream>
#include "headerFiles/evidencia.h"
#include <fstream> // es la libreria que permite trabajar con archivos



void Evidencia::imprimir() {
    cout << "Nombre de Evidencia: " << nombreEvidencia << endl;
    cout << "Te tomara alrededor de " << tiempo << " dias el conseguir esta evidencia\n\n\n";

    ifstream archivoReader(txtfileEvidencia);
    if(!archivoReader.is_open()){
        cerr << "Error al abrir archivo: " << txtfileEvidencia << endl;
        return;

    }
    string linea; 
    while(getline(archivoReader, linea)){
        cout << linea <<endl;
    }
    archivoReader.close();
}
//se cambiaron los valores de la evidencia 6 para ser mas realista
//cambiar el sistema de punntos entre evidencia 2 y evidencia 3. Es mas valioso que la creatura misma testifique a la confesion de Victor
//Puntos y archivos de Caso I para esta evidencia hay 16 dias max 
Evidencia C1E1 = {"Nombre de la evidencia: No status de la creatura", 3,2,6, "textFiles/case1Evidence1.txt", "prosecutorQuestions/case1/e1q1.txt","", "prosecutorQuestions/case1/e1q2.txt", "", "prosecutorQuestions/case1/e1q3.txt", ""};
Evidencia C1E2 = {"Nombre de la evidencia: Testimonio de la creatura", 3, 2, 6, "textFiles/case1Evidence2.txt", "prosecutorQuestions/case1/e2q1.txt","", "prosecutorQuestions/case1/e2q2.txt" "" ,"prosecutorQuestions/case1/e2q3.txt"} ;
Evidencia C1E3 = {"Nombre de la evidencia:  Testimonio de Victor siendo victima de la creatura", 4, 1, 8, "textFiles/case1Evidence3.txt", "prosecutorQuestions/case1/e3q1.txt","", "prosecutorQuestions/case1/e3q2.txt","", "prosecutorQuestions/case1/e3q3.txt","", "prosecutorQuestions/case1/e3q4.txt"};
Evidencia C1E4 = {"Nombre de la evidencia: Diario de Victor", 1, 4, 2, "textFiles/case1Evidence4.txt", "prosecutorQuestions/case1/e4q1.txt"};
Evidencia C1E5 = {"Nombre de la evidencia: Testimonio de Padre Vander", 1, 4, 2, "textFiles/case1Evidence5.txt", "prosecutorQuestions/case1/e5q1.txt"};
Evidencia C1E6 = {" Nombre de la evidencia: Razon de creacion de la creatura", 1, 3, 2, "textFiles/case1Evidence6.txt", "prosecutorQuestions/case1/e6q1.txt","", "prosecutorQuestions/case1/e6q2.txt"};

//Puntos y archivos de Caso II 
//nuevo minimo de puntos juico para ganar: 10 
//10 dias 
Evidencia C2E1 = {"Nombre de la evidencia: Testimonio Padre SJ", 4,1,8, "textFiles/case2Evidence1.txt", "prosecutorQuestions/case2/e1q1.txt", "prosecutorQuestions/case2/e1q2a.txt", "prosecutorQuestions/case2/e1q2b.txt", "prosecutorQuestions/case2/e1q3.txt", "", "prosecutorQuestions/case2/e1q4.txt" }; 
Evidencia C2E2 = {"Nombre de la evidencia: Texto de Gottfried Wilhelm", 3,2,6, "textFiles/case2Evidence2.txt"};
Evidencia C2E3 = {"Nombre de la evidencia: Testimonio de Cientifico", 4,1,8, "textFiles/case2Evidence3.txt"};
//se ha removido evidencia 4 para agilizar los procesos 
Evidencia C2E5 = {"Nombre de  la evidencia: Personas Previamente Acusadas por la Iglesia", 3, 2, 6, "textFiles/case2Evidence5.txt" };
Evidencia C2E6 = {"Nombre de la evidencia: Investigar Fiscal", 6, -1, 12, "textFiles/case2Evidence6.txt","prosecutorQuestions/case2/e6q1.txt" ,"prosecutorQuestions/case2/e6q2a.txt" ,"prosecutorQuestions/case2/e6q2b.txt", "prosecutorQuestions/case2/e6q3a.txt", "prosecutorQuestions/case2/e6q3b.txt", "prosecutorQuestions/case2/e6q4.txt" ,"prosecutorQuestions/case2/e6q5.txt" ,"prosecutorQuestions/case2/e6q6.txt" };

void menuEvidence(){
    int optionEvidencia;
    char confirm;

    cout << "\nVictor: ";
    do{
    cout << "Cual Evidencia quieres escuchar? 1-6  \n";
    cin >> optionEvidencia;

    switch (optionEvidencia){
case 1:
    cout << C1E1.nombreEvidencia << endl;
    C1E1.imprimir();
    break;

case 2:
    cout << C1E2.nombreEvidencia << endl;
    C1E2.imprimir();
    break;

case 3: 
    cout << C1E3.nombreEvidencia << endl; 
    C1E3.imprimir();    
    break;

case 4: 
    cout << C1E4.nombreEvidencia << endl;
    C1E4.imprimir();
    break;

case 5:
    cout << C1E5.nombreEvidencia << endl;
    C1E5.imprimir();
    break;

case 6:
    cout << C1E6.nombreEvidencia << endl;
    C1E6.imprimir();
    break;
    
    default:
    cout << "Opción invalida. Elige una opción entre 1-6. \n";
    }

    cout << "Presiona X para volver a las evidencias o cualquier otra tecla para salir de las evidencias: \n";
    cin >> confirm;
    confirm = tolower (confirm);
}   
    while (confirm == 'x');

}