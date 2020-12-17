// Uebung_4_2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;


int main()
{
    int Obergrenze;
    int Untergrenze;
    int y = 0;

    cout << "Geben sie bitte eine Untergrenze ein. " << endl;
    cin >> Untergrenze;

    cout << "Geben sie bitte eine Obergrenze ein. " << endl;
    cin >> Obergrenze;

       
    
        

        for (int i = Untergrenze; i <= Obergrenze; i++) {
            if (i == 0 || i == 1)
            {
                cout << "Das gilt nicht!";

            }
            else {
                y = 0;
                for (int x = 2; x <= i - 1; x++)
                {
                    if (i % x == 0)
                    {
                        y = 1;
                        break;
                    }
                }
                    if (y == 1)
                    {
                      //  cout << i << " Keine Primzahl " << endl;
                       
                    }

                    else
                    {
                        cout << i << " Primzahl " << endl;
                       
                    }
                
            }

        }

       
        return(0);

    
    


}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
