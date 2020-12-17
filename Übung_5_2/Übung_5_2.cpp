// Übung_5_2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>


int erstesarray[100] = {};
int haeufigkeiten[10] = {};
float Mittelwert = 0;
int Modalwert;

int main()
{ 
    srand(time(NULL));


    std::cout << "Zufallszahlen im Bereich [1,10]" << std::endl;
    for (int i = 0; i < 99; ++i) {


        int zufallszahl = 1 + rand() % 10;
        erstesarray[i] = zufallszahl;

        switch (zufallszahl) {

        case 1:
            haeufigkeiten[0] += 1;
            break;

        case 2:
            haeufigkeiten[1] += 1;
            break;

        case 3:
            haeufigkeiten[2] += 1;
            break;

        case 4:
            haeufigkeiten[3] += 1;
            break;

        case 5:
            haeufigkeiten[4] += 1;
            break;

        case 6:
            haeufigkeiten[5] += 1;
            break;

        case 7:
            haeufigkeiten[6] += 1;
            break;

        case 8:
            haeufigkeiten[7] += 1;
            break;

        case 9:
            haeufigkeiten[8] += 1;
            break;

        case 10:
            haeufigkeiten[9] += 1;
            break;

        }

    }

    for (int i = 0; i < 10; ++i) {
        Mittelwert = Mittelwert + haeufigkeiten[i] * (i + 1);
    }

    Mittelwert /= 100;
    

    for (int i = 0; i < 9; ++i) {
        std::cout << i + 1 << " --> " << haeufigkeiten[i] << "Mal" << std::endl;
        if (haeufigkeiten[i] > Modalwert) {
            Modalwert = haeufigkeiten[i];
        }

    }

    for (int i = 0; i < 10; ++i) {
        if (Modalwert == haeufigkeiten[i]) {
            Modalwert = i + 1;
        }
    }
    std::cout << "Mittelwert = " << Mittelwert << std::endl;
    std::cout << "Modalwert = " << Modalwert << std::endl;
    return 0;
}