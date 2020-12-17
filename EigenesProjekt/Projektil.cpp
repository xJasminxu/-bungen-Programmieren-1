#include "Projektil.h"

Projektil::Projektil(int x, int y)
{
	m_X = x;
	m_Y = y;
}

void Projektil::update()
{
	if(m_Y > 2)
	m_Y--;
}
