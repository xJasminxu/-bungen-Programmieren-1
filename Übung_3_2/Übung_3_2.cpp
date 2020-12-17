// Übung_3_2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    float Flaecheninhalt, Schenkel, Basis, Radikant, Wurzelbetrag; // a = Schenkel, c = Basis
    
    Schenkel = 2.2f;
    Basis = 3.5f;
    Radikant = pow(Schenkel, 2) - ( 1.0/4.0 * pow(Basis, 2));
    Wurzelbetrag = sqrt(Radikant);
    Flaecheninhalt = 1.0 / 2.0 * Basis * Wurzelbetrag;
    cout << "Die Wurzel aus " << Radikant << " ist " << Wurzelbetrag << endl;
    cout << "Flaecheninhalt des Dreiecks " << "ist " << Flaecheninhalt << endl;
    


    
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
