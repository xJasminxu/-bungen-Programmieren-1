#include "Frage1.h"

Frage1::Frage1()
{
	m_Antwort1 = false;
	m_Antwort2 = false;
	m_Antwort3 = false;
	m_Beantwortet = false;
}

void Frage1::Frage()
{
	cout << "Are you male or female or neutrois?" << endl;
	cout << endl;
	cout << "1: male" << endl;
	cout << "2: female" << endl;
	cout << "3: neutrois" << endl;
	cout << endl;
}

void Frage1::Antwort(int antwort)
{
	if (antwort == 1) 
	{
		m_Antwort1 = true;
	}
	else if (antwort == 2) 
	{
		m_Antwort2 = true;
	}
	else
	{
		m_Antwort3 = true;
	}
}
