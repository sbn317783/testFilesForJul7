/*In this document, you will find the work around the declarations of its header file. 
In here you we declared and gave value to the algoritms for their funtionality. 
For example, we made the gameFilesPrint method in order for it to read the .txt file and we also made 
the dialog method so the user can add their dialog here instead of the main file so we can keep it clean.*/

#include <iostream>
#include "headerFiles/otherTxtFiles.h"
#include <fstream> // This library allows us to read .txt files
#include <sstream> //this is needed for stringn stream 


void gameFilesPrint::showLongDialog() {
    ifstream fileReader(txtDialogSaved);
    if(!fileReader.is_open()){
        cerr << "Error al abrir archivo: " << txtDialogSaved << endl;
        return;

    }
    string linea; 
    while(getline(fileReader, linea)){
        cout << linea <<endl;
    }
    fileReader.close(); //not close it because it might be useful to keep in on a array

}
gameFilesPrint txtDialogFall = {"textFiles/dialogFall.txt"};
gameFilesPrint evelynTakeArchive = {"textFiles/evelynTakeArchive.txt"};
gameFilesPrint victorInformation = {"textFiles/victorCharacteristics.txt"};
gameFilesPrint howPresentToVictor = {"textFiles/howPresentToVictor.txt"};
gameFilesPrint victorPresentationA = {"textFiles/VictorPresentationA.txt"};
gameFilesPrint victorPresentationB = {"textFiles/VictorPresentationB.txt"};
gameFilesPrint refleccionAfterReadingFile = {"textFiles/refleccionDespuesDeLeerCaso.txt"};
gameFilesPrint victorRegretful = {"textFiles/VictorArrepentido.txt"};
gameFilesPrint looking4Victor = {"textFiles/buscandoVictor.txt"};
gameFilesPrint victorChildhodd = {"textFiles/victorInfancia.txt"};
gameFilesPrint victorMakingofCreature = {"textFiles/victorCreacionCreatura.txt"};
gameFilesPrint victorHowCarcel = {"textFiles/victorHowCarcel.txt"};
gameFilesPrint HistoriaCase1 = {"textFiles/HistoriaCase1.txt"};






//this void is to print dialog that is not quite big 
void Dialog::showShortDialog(){
    cout << character << endl << "\t" << characterDialog;
}

Dialog whyArriveLate = {"Evelyn:\n","\tHas llegado tarde " /*ingresar nombre de la persona aca. */ "\n \tQue te ha pasado? " };
Dialog llegarTardeA = {"Evelyn:","\n\tDeja de ser mentiroso \n\tTe vi en la cafeteria tomandote un espresso en mi camino al trabajo.\n\tSi vas a mentir al menos hazlo bien \n" };
Dialog llegarTardeB = {"Evelyn:","\n\tTipico de ti!\n\tDebes de ser mas responsable con tu trabajo, de lo contrario\n\ttendre que reportarte con mi supervisor. \n" };
Dialog youHave2hrs = {"Evelyn: ","\n\tTienes dos horas para regresar con tu cliete antes de la audiencia inicial. \n\tDe lo contrario no soy responsable de lo que te haga mi supervisor" };

////agregar esto @ jul 7 12:12am
string getDialogAsString(const gameFilesPrint& diaglogStruct){
    ifstream filereader(diaglogStruct.txtDialogSaved);
    if(!filereader.is_open()){
        cerr << "Error al abrir archivo: " << diaglogStruct.txtDialogSaved << endl;
        return "[ERROR]: Archivo no encontrado";
    }
    stringstream buffer;
    buffer << filereader.rdbuf(); //reads entire file into buffer 
    filereader.close();
    return buffer.str();

}