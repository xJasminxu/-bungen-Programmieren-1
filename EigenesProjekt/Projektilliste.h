#pragma once
#include <vector>
#include "Projektil.h"
class Projektilliste
{
public:
	Projektilliste();
	std::vector < Projektil > list_Projektile;
	void add(Projektil projektil);
	void remove(int stelle);
};

