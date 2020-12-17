#pragma once
#include "Projektilliste.h"
#include "Projektil.h"


	class Player
	{
		Projektilliste& m_Projektilliste;
	public:
		//Konstruktor
		Player(Projektilliste& projektilliste) :m_Projektilliste(projektilliste)
		{
			//m_Projektilliste = projektilliste;
			m_name = 'P';
			m_PositionX = 1;
			m_PositionY = 1;

		}
		int getPosition();
		void move(char input);
		char getName();
		void setPosition(int x, int y);
	private:
		int m_PositionX;
		char m_name;
		int m_PositionY;
		
	};

