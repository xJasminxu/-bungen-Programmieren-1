#pragma once
#include <iostream>
using namespace std;

class Frage1
{
public:
	Frage1();

	void Frage();
	void Antwort(int antwort);

private:

	bool m_Antwort1;
	bool m_Antwort2;
	bool m_Antwort3;
	bool m_Beantwortet;

};

