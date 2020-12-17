#include "Projektilliste.h"

Projektilliste::Projektilliste()
{
	std::vector < Projektil > Projektile(0, Projektil(0, 0));
	list_Projektile = Projektile;

}

void Projektilliste::add(Projektil projektil)
{
	list_Projektile.push_back(projektil);
}

void Projektilliste::remove(int stelle)
{
	list_Projektile.erase(list_Projektile.begin() + stelle);
}