// Übung_2_1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <climits>
using namespace std;

int main()
{
   //Ausgabe der Speicherplatzgrößen und deren Wertbereiche
	cout << "bool - nutzt " << sizeof(bool) << "Bytes." << endl;
	cout << "char - nutzt " << sizeof(char) << "Bytes." << "Wertebereich - char [" << CHAR_MIN << " , " << UCHAR_MAX << "]" << endl;
	cout << "unsigned char - nutzt " << sizeof(unsigned char) << " Bytes." << "Wertebereich - unsigned char [0" << " , " << UCHAR_MAX << "]" << endl;
	cout << "signed char - nutzt " << sizeof(signed char) << "Bytes." << "Wertebereich - signed char [" << SCHAR_MIN << " , " << SCHAR_MAX << "]" << endl;
	cout << "short - nutzt " << sizeof(short) << " Bytes." << "Wertebereich - short [" << SHRT_MIN << " , " << SHRT_MAX << "]" << endl;
	cout << "unsigned short - nutzt " << sizeof(unsigned short) << " Bytes. " << "Wertebereich - unsigned short [0" << " , " << USHRT_MAX << "]" << endl;
	cout << "Wertebereich - int [" << INT_MIN << " , " << INT_MAX << "]" << endl;
	cout << "unsigned int - nutzt" << sizeof(unsigned int) << " Bytes. " << "Wertebereich - unsigned int [0" << " , " << UINT_MAX << "]" << endl;
	cout << "long - nutzt " << sizeof(long) << " Bytes." << "Wertebereich - long [ " << LONG_MIN << " , " << LONG_MAX << "]" << endl;
	cout << "unsigned long - nutzt " << sizeof(unsigned long) << " Bytes. " << "Wertebereich - unsigned long [0" << " , " << ULONG_MAX << "]" << endl;
	cout << "long long - nutzt " << sizeof(long long) << " Bytes. " << "Wertebereich - long long [" << LLONG_MIN << " , " << LLONG_MAX << "]" << endl;
	cout << "unsigned long long - nutzt " << sizeof(unsigned long long) << " Bytes. " << "Wertebereich - unsigned long long [0 " << " , " << ULLONG_MAX << "]" << endl;

  
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
