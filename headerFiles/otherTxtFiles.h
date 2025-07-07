/*In this header, all the .txt files and character dialogs will be stored here. 

For example, the struct gameFilesPrint method is declared here and will be used to shown the large.txt files, 
it has a method that helps read all the .txt file line by line until the end. Then, declares what variables will
be used in the otherTxtFiles.cpp archive, here they are also declared. 

The Diaglog struct provides a constructor in which will print the name of the person who's saying the dialog and 
their actual diaglog. Just like the previous method, they are only declared here so they are used by the otherTxtFiles.cpp
struct on a separece document. 
*/

#ifndef otherTxtFiles_h
#define otherTxtFiles_h

#include <iostream>
#include <string>
using namespace std;

struct gameFilesPrint{
    string txtDialogSaved; // this will be useful for long  dialog
    void showLongDialog();
};
extern gameFilesPrint txtDialogFall, evelynTakeArchive, victorInformation, howPresentToVictor, victorPresentationA, victorPresentationB, refleccionAfterReadingFile, victorRegretful, looking4Victor, victorChildhodd, victorMakingofCreature, victorHowCarcel, HistoriaCase1; //Aqui van los que se llaman afuera 

//miniGames.cpp
extern gameFilesPrint C1E1IntroThought;

//new funtion that will return text as String 
string getDialogAsString(const gameFilesPrint& diaglogStruct); //agregar esto @ jul 7 12:12am

struct Dialog{
    string character, characterDialog; // this will be useful for short dialog
    void showShortDialog();
};
extern Dialog whyArriveLate, llegarTardeA, llegarTardeB, youHave2hrs; //Here you declare the names of the structs you will use later;
extern Dialog fisherman;
#endif