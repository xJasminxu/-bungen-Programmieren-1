#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <ctime>

namespace statistik
{
	class Rechner
	{
	public:
		Rechner(); //Konstruktor
		~Rechner(); // Destruktor
		double Modalwert();
		double Mittelwert();
		void setarray(int size, int *array);
	private:
		int m_size;
		int *m_array;
	};
}
