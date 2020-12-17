#include "Player.h"




int Player::getPosition()
{
	return m_PositionX;

}

void Player::move(char input)
{
	if (input == 'a' && m_PositionX > 1) 
	{
		m_PositionX -= 1; 
	}
	if (input == 'd' && m_PositionX < 48)
	{
		m_PositionX += 1;
	}

	if (input == ' ')
	{
		Projektil projektil = Projektil(m_PositionX, m_PositionY - 1);
		m_Projektilliste.add(projektil);
	}
}

char Player::getName()
{
	return m_name;
}

void Player::setPosition(int x, int y)
{
	m_PositionX = x;
	m_PositionY = y;
}



