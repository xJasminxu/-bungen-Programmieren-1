// Übung_7_2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Roboter.h"
using namespace std;

char Spielfeldausgabe[23];
int mainpositionR2D2 = 0;
int mainpositionC3PO = 0;


void Spielfeld()
{
    for (int i = 0; i < 22; ++i) {
        Spielfeldausgabe[i] = ' ';
    }
}
int main()
{

    srand(time(NULL));
    Roboter ob1;
    Roboter ob2;
    ob1.R2D2();
    ob2.C3PO();
    while (true) {
        Spielfeld();
        mainpositionR2D2 = ob1.R2D2();
        mainpositionC3PO = ob2.C3PO();
        Spielfeldausgabe[mainpositionR2D2] = 'R';
        Spielfeldausgabe[mainpositionC3PO] = 'C';

        for (int i = 0; i < 22; ++i) {
            cout << Spielfeldausgabe[i];
        }
  }
}

