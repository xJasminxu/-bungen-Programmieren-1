#include "Rechner.h"
using namespace statistik;

Rechner::Rechner()
{
	 m_size = 0;
	 m_array = nullptr;

}

Rechner::~Rechner()
{

}

double statistik::Rechner::Modalwert() 
{
	int array1[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; //zählt Häufigkeit
	int modalwert = 0;
	for (int i = 0; i < m_size; i++) { //int einarray[10] = { 0, 1, 3, 3, 3, 5, 5, 7, 8, 9};
		array1[m_array[i]] += 1;
	}
	for (int i = 0; i < m_size-1; i++) {
		if (array1[modalwert] < array1[i]) {
			modalwert = m_array[i];
		}

	}
	return modalwert;
}

double statistik::Rechner::Mittelwert()
{
	double Loesung = 1;
	for (int i = 0; i < m_size; ++i) {
		Loesung *= *(m_array + i);
	}
	return pow(Loesung, 1.0 / m_size);
}

void statistik::Rechner::setarray(int size, int* array)
{
	m_size = size;
	m_array = array;
}

