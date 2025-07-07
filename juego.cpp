#include <iostream>
#include <vector>
#include "headerFiles/juego.h"
#include "headerFiles/evidencia.h"
#include <fstream> //this library helps import  .txt files
#include <cctype> // to lowercase some input from the user to minimize erros
#include "headerFiles/evidencia.h" // imports the header for evidence
#include "headerFiles/otherTxtFiles.h"
#include "headerFiles/nombre.h" // imports the header for player 
#include "headerFiles/portafolio.h" // imports the header for portfolio
using namespace std;



void askVictorsLife (){  // for this function we will stored the loop on how Victor ended up in Jail
    char Opiton; 
    bool askedA = false, askedB = false, askedC = false;

    while (!(askedA && askedB && askedC))
    {
       cout << "Que te gustaria saber de Victor?\n";
       if (!askedA) cout << "\na).Cuentame un poco de tu infancia\n";
       if (!askedB) cout << "b).Cuentame Victor, Como hiciste la creatura\n";
       if (!askedC) cout << "c). Como terminaste en la carcel?\n ";
       cin >> Opiton;
       Opiton = tolower(Opiton);

       if (Opiton == 'a'){
        if(!askedA){
        victorChildhodd.showLongDialog();
        askedA = true;
        }else {cout << "Victor: "<< endl;
         cout << "   Ya preguntaste eso amigo.... Pregunta otra cosa" << endl;}
       } 
       else if (Opiton == 'b')
       {
        if (!askedB)
        {
            victorMakingofCreature.showLongDialog();
            askedB = true; 
        }else {cout << "Victor: "<< endl;
         cout << "   Ya preguntaste eso amigo.... Pregunta otra cosa" << endl;}
       }   
       else if (Opiton == 'c'){
        if (!askedC){
            victorHowCarcel.showLongDialog();
            askedC= true;
        }else {cout << "\nVictor: "<< endl;
         cout << "   Ya preguntaste eso amigo.... Pregunta otra cosa\n" << endl;}
       }
       else {cout << "\n Opción inválida. Escoge una de las literales";} 
    }
 }

 
void preEvidenceShownGame(){ // in this funtion is stored all the dialog prior up to saving the evidence
    //used variables 
    char llegarTarde; 
    char pickUpEvidence; 
    char victorPresentation;
    char victorOption, confirm;
    int optionEvidencia;

}

void pedirNombreEjemplo() {
    Jugador miJugador;

    cout << "Ingresa tu nombre: ";
    getline(cin, miJugador.nombreJugador);

    cout << "Hola, " << miJugador.nombreJugador << "!" << endl;

    txtDialogFall.showLongDialog();
    cout << whyArriveLate.characterDialog;
}

 void excuseBeingLate() {
    while (true) {
        char llegarTarde;
        cout << "\n\n a.)  Mi alarma no sono \n b.) Dile la verdad \n c.) Mi perro se murio \n ";
        cin >> llegarTarde;
        llegarTarde = tolower(llegarTarde); // Convierte a minúscula

        if (llegarTarde == 'a' || llegarTarde == 'c') {
            cout << llegarTardeA.character << llegarTardeA.characterDialog;
            break;
        } else if (llegarTarde == 'b') {
            cout << llegarTardeB.character << llegarTardeB.characterDialog;
            break;
        } else {
            cout << "Por favor, escoge una de las opciones previamente mencionadas\n\n";
        }
    }
}

void pickUpEvidence() {
    char pickUpEvidence;
    while (true) {
        cin >> pickUpEvidence;
        if (pickUpEvidence == 'x' || pickUpEvidence == 'X') {
            victorInformation.showLongDialog(); // muestra los cargos o información
            break;
        } else {
            cout << "Por favor, presione 'x' para seguir.\n";
        }
    }
}

  





 
