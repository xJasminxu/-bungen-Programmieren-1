#include <iostream>
#include <stdlib.h>
#include <time.h>


float F3(float Untergrenze , float Obergrenze)
{

	float Rate = (rand() % 101) / 100.f;
	float Bereich = Obergrenze - Untergrenze;
	float Prozentualerbereich = Bereich * Rate;
	return Prozentualerbereich + Untergrenze;

}