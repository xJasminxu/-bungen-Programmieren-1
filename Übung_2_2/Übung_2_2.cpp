// Übung_2_2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;
#define PI 3.14159


int main()  

{
	double Radius, Umfang, Oberflaeche, Volumen;
	Radius = 1.3;
	Umfang = 2 * PI * Radius;
	Oberflaeche = 4 * PI * Radius * Radius; 
	Volumen = 4.0 / 3.0 * PI * pow(Radius, 3);
	


		
	cout << "Umfang = " << Umfang << endl;
	cout << "Oberflaeche = " << Oberflaeche << endl;
	cout << "Volumen = " << Volumen << endl;
	cout << "Radius = " << Radius << endl;




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
