// Übung_3_1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Gib eine Zahl von 0-128 ein" << endl;
	cin >> n;

	int n1 = n % 2;
	n /= 2;
	int n2 = n % 2;
	n /= 2;
	int n3 = n % 2;
	n /= 2;
	int n4 = n % 2;
	n /= 2;
	int n5 = n % 2;
	n /= 2;
	int n6 = n % 2;
	n /= 2;
	int n7 = n % 2;
	n /= 2;
	int n8 = n % 2;
	n /= 2;

	cout << n8 << n7 << n6 << n5 << n4 << n3 << n2 << n1 << endl;

	return 0;

	
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
