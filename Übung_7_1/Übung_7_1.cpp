// Übung_7_1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Rechner.h"
using namespace statistik;
int main()
{
	int einarray[10] = { 1, 1, 3, 3, 3, 5, 5, 7, 8, 9};
	Rechner rechne = Rechner();
	rechne.setarray(10, einarray);
	
	std::cout << "Modalwert = " << rechne.Modalwert() << std::endl;
	std::cout << "Geometrischer Mittelwert = " << rechne.Mittelwert() << std::endl;

}


