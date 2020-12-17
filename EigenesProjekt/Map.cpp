#include "Map.h"
#include <iostream>
#include <chrono>
#include <thread>
#include "Fragen.h"
#include <conio.h>
#include "Player.h"
#include "Projektilliste.h"
using namespace std;

void startGame() 
{
    Projektilliste projektilliste = Projektilliste();
    const int hoehe = 15;
    const int breite = 50;
    char map[hoehe][breite] = {};  // [y][x]
    char border = 219;
    char input;
    Player player = Player(projektilliste);
    player.setPosition(breite / 2, hoehe - 2);
    int Frage = 1;


    for(int y = 0; y < hoehe; y++)
    {
        for(int x = 0; x < breite; x++)
        {
            map[y][x] = ' ';
        }
    }
    for (int y = 0; y < hoehe; y++)
    {
        for (int x = 0; x < breite; x++)
        {
            if(y == 0)
            {
                map[y][x] = border;
            }
            if (y == 1)

            {
                if(x == breite / 7 * 1-3)
                {
                    map[y][x] = 'a';
                } 
                else if (x == breite / 7 * 2-3)
                { 
                    map[y][x] = 'b';
                }
                else if (x == breite / 7 * 3-3)
                {
                    map[y][x] = 'c';
                }
                else if (x == breite / 7 * 4-3)
                {
                    map[y][x] = 'd';
                }
                else if (x == breite / 7 * 5-3)
                {
                    map[y][x] = 'e';
                }
                else if (x == breite / 7 * 6-3)
                {
                    map[y][x] = 'f';
                }
                else if (x == breite / 7 * 7-3)
                {
                    map[y][x] = 'g';
                }


                //Abtrennungen
                if (x == breite / 7 * 1)
                {
                    map[y][x] = '|';
                }
                else if (x == breite / 7 * 2)
                {
                    map[y][x] = '|';
                }
                else if (x == breite / 7 * 3)
                {
                    map[y][x] = '|';
                }
                else if (x == breite / 7 * 4)
                {
                    map[y][x] = '|';
                }
                else if (x == breite / 7 * 5)
                {
                    map[y][x] = '|';
                }
                else if (x == breite / 7 * 6)
                {
                    map[y][x] = '|';
                }
                else if (x == breite / 7 * 7)
                {
                    map[y][x] = '|';
                }

            }
            if (y == hoehe-1)
            {
                map[y][x] = border;
            }
            if (x == 0)
            {
                map[y][x] = border;
            }
            if (x == breite-1)
            {
                map[y][x] = border;
            }
        }
    }

	while (true) 
    {
        if (Frage == 1)
        {
            cout << Frage1 << endl;
            cout << endl;
            cout << Antwort1a << endl;
            cout << Antwort1b << endl;
        }

        if (Frage == 2)
        {
            cout << Frage2 << endl;
            cout << endl;
            cout << Antwort2a << endl;
            cout << Antwort2b << endl;
        }

        if (Frage == 3)
        {
            cout << Frage3 << endl;
            cout << endl;
            cout << Antwort3a << endl;
            cout << Antwort3b << endl;
            cout << Antwort3c << endl;
            cout << Antwort3d << endl;
            cout << Antwort3e << endl;
            cout << Antwort3f << endl;
            cout << Antwort3g << endl;
           
        }

        if (Frage == 4)
        {
            cout << Frage4 << endl;
            cout << endl;
            cout << Antwort4a << endl;
            cout << Antwort4b << endl;
            cout << Antwort4c << endl;
        }

        if (Frage == 5)
        {
            cout << Frage5 << endl;
            cout << endl;
            cout << Antwort5a << endl;
            cout << Antwort5b << endl;
            cout << Antwort5c << endl;
            cout << Antwort5d << endl;
        }

        if (Frage == 6)
        {
            cout << Frage6 << endl;
            cout << endl;
            cout << Antwort6a << endl;
            cout << Antwort6b << endl;
            cout << Antwort6c << endl;
        }

        if (Frage == 7)
        {
            cout << Frage7 << endl;
            cout << endl;
            cout << Antwort7a << endl;
            cout << Antwort7b << endl;
            cout << Antwort7c << endl;
        }

        if (Frage == 8)
        {
            cout << Frage8 << endl;
            cout << endl;
            cout << Antwort8a << endl;
            cout << Antwort8b << endl;
        }

        if (Frage == 9)
        {
            cout << Frage9 << endl;
            cout << endl;
            cout << Antwort9a << endl;
            cout << Antwort9b << endl;
        }

        if (Frage == 10)
        {
            cout << Frage10 << endl;
            cout << endl;
            cout << Antwort10a << endl;
            cout << Antwort10b << endl;
        }

        for (int i = 0; i < projektilliste.list_Projektile.size(); i++)
        {

            Projektil& projektil = projektilliste.list_Projektile[i];
            map[projektil.m_Y + 1][projektil.m_X] = ' ';
            if (projektil.m_Y <= 3)
            {
                projektilliste.remove(i);
                i--;
                break;
            }
            map[projektil.m_Y][projektil.m_X] = 'x';
            projektil.update();

            //Prüft, welche Antwort getroffen wurde
         /*   if (projektil.m_Y <= 4)
            {
                if (projektil.m_X <= breite / 7 * 1)
                {
                    if (Frage == 1)
                    {
                        Antwort1 = 1;
                        Frage++;
                    }
                    if (Frage == 2)
                    {
                        Antwort2 = 1;
                        Frage++;
                    }
                    if (Frage == 3)
                    {
                        Antwort3 = 1;
                        Frage++;
                    }
                    if (Frage == 4)
                    {
                        Antwort4 = 1;
                        Frage++;
                    }
                    if (Frage == 5)
                    {
                        Antwort5 = 1;
                        Frage++;
                    }
                    if (Frage == 6)
                    {
                        Antwort6 = 1;
                        Frage++;
                    }
                    if (Frage == 7)
                    {
                        Antwort7 = 1;
                        Frage++;
                    }
                    if (Frage == 8)
                    {
                        Antwort8 = 1;
                        Frage++;
                    }
                    if (Frage == 9)
                    {
                        Antwort9 = 1;
                        Frage++;
                    }
                    if (Frage == 10)
                    {
                        Antwort10 = 1;
                        Frage++;
                    }

                }
                else if (projektil.m_X <= breite / 7 * 2)
                {
                    if (Frage == 1)
                    {
                        Antwort1 = 2;
                        Frage++;
                    }
                    if (Frage == 2)
                    {
                        Antwort2 = 2;
                        Frage++;
                    }
                    if (Frage == 3)
                    {
                        Antwort3 = 2;
                        Frage++;
                    }
                    if (Frage == 4)
                    {
                        Antwort4 = 2;
                        Frage++;
                    }
                    if (Frage == 5)
                    {
                        Antwort5 = 2;
                        Frage++;
                    }
                    if (Frage == 6)
                    {
                        Antwort6 = 2;
                        Frage++;
                    }
                    if (Frage == 7)
                    {
                        Antwort7 = 2;
                        Frage++;
                    }
                    if (Frage == 8)
                    {
                        Antwort8 = 2;
                        Frage++;
                    }
                    if (Frage == 9)
                    {
                        Antwort9 = 2;
                        Frage++;
                    }
                    if (Frage == 20)
                    {
                        Antwort10 = 2;
                        Frage++;
                    }
                }
                else if (projektil.m_X <= breite / 7 * 3)
                {
                if (Frage == 1)
                {
                    Antwort1 = 3;
                    Frage++;
                }
                if (Frage == 2)
                {
                    Antwort2 = 3;
                    Frage++;
                }
                if (Frage == 3)
                {
                    Antwort3 = 3;
                    Frage++;
                }
                if (Frage == 4)
                {
                    Antwort4 = 3;
                    Frage++;
                }
                if (Frage == 5)
                {
                    Antwort5 = 3;
                    Frage++;
                }
                if (Frage == 6)
                {
                    Antwort6 = 3;
                    Frage++;
                }
                if (Frage == 7)
                {
                    Antwort7 = 3;
                    Frage++;
                }
                if (Frage == 8)
                {
                    Antwort8 = 3;
                    Frage++;
                }
                if (Frage == 9)
                {
                    Antwort9 = 3;
                    Frage++;
                }
                if (Frage == 10)
                {
                    Antwort10 = 3;
                    Frage++;
                }
                }
                else if (projektil.m_X <= breite / 7 * 4)
                {
                if (Frage == 1)
                {
                    Antwort1 = 4;
                    Frage++;
                }
                if (Frage == 2)
                {
                    Antwort2 = 4;
                    Frage++;
                }
                if (Frage == 3)
                {
                    Antwort3 = 4;
                    Frage++;
                }
                if (Frage == 4)
                {
                    Antwort4 = 4;
                    Frage++;
                }
                if (Frage == 5)
                {
                    Antwort5 = 4;
                    Frage++;
                }
                if (Frage == 6)
                {
                    Antwort6 = 4;
                    Frage++;
                }
                if (Frage == 7)
                {
                    Antwort7 = 4;
                    Frage++;
                }
                if (Frage == 8)
                {
                    Antwort8 = 4;
                    Frage++;
                }
                if (Frage == 9)
                {
                    Antwort9 = 4;
                    Frage++;
                }
                if (Frage == 40)
                {
                    Antwort10 = 4;
                    Frage++;
                }
                }
                else if (projektil.m_X <= breite / 7 * 5)
                {
                if (Frage == 1)
                {
                    Antwort1 = 5;
                    Frage++;
                }
                if (Frage == 2)
                {
                    Antwort2 = 5;
                    Frage++;
                }
                if (Frage == 3)
                {
                    Antwort3 = 5;
                    Frage++;
                }
                if (Frage == 4)
                {
                    Antwort4 = 5;
                    Frage++;
                }
                if (Frage == 5)
                {
                    Antwort5 = 5;
                    Frage++;
                }
                if (Frage == 6)
                {
                    Antwort6 = 5;
                    Frage++;
                }
                if (Frage == 7)
                {
                    Antwort7 = 5;
                    Frage++;
                }
                if (Frage == 8)
                {
                    Antwort8 = 5;
                    Frage++;
                }
                if (Frage == 9)
                {
                    Antwort9 = 5;
                    Frage++;
                }
                if (Frage == 50)
                {
                    Antwort10 = 5;
                    Frage++;
                }
                }
                else if (projektil.m_X <= breite / 7 * 6)
                {
                if (Frage == 1)
                {
                    Antwort1 = 6;
                    Frage++;
                }
                if (Frage == 2)
                {
                    Antwort2 = 6;
                    Frage++;
                }
                if (Frage == 3)
                {
                    Antwort3 = 6;
                    Frage++;
                }
                if (Frage == 4)
                {
                    Antwort4 = 6;
                    Frage++;
                }
                if (Frage == 5)
                {
                    Antwort5 = 6;
                    Frage++;
                }
                if (Frage == 6)
                {
                    Antwort6 = 6;
                    Frage++;
                }
                if (Frage == 7)
                {
                    Antwort7 = 6;
                    Frage++;
                }
                if (Frage == 8)
                {
                    Antwort8 = 6;
                    Frage++;
                }
                if (Frage == 9)
                {
                    Antwort9 = 6;
                    Frage++;
                }
                if (Frage == 10)
                {
                    Antwort10 = 6;
                    Frage++;
                }
                }
                else if (projektil.m_X <= breite / 7 * 7)
                {
                if (Frage == 1)
                {
                    Antwort1 = 7;
                    Frage++;
                }
                if (Frage == 2)
                {
                    Antwort2 = 7;
                    Frage++;
                }
                if (Frage == 3)
                {
                    Antwort3 = 7;
                    Frage++;
                }
                if (Frage == 4)
                {
                    Antwort4 = 7;
                    Frage++;
                }
                if (Frage == 5)
                {
                    Antwort5 = 7;
                    Frage++;
                }
                if (Frage == 6)
                {
                    Antwort6 = 7;
                    Frage++;
                }
                if (Frage == 7)
                {
                    Antwort7 = 7;
                    Frage++;
                }
                if (Frage == 8)
                {
                    Antwort8 = 7;
                    Frage++;
                }
                if (Frage == 9)
                {
                    Antwort9 = 7;
                    Frage++;
                }
                if (Frage == 7)
                {
                    Antwort10 = 7;
                    Frage++;
                }
                }

            }*/
        }
        map[hoehe-2][player.getPosition()] = player.getName();
        

        for (int y = 0; y < hoehe; y++)
        {
            
            for (int x = 0; x < breite; x++)
            {
                cout << map[y][x];
            }
            cout << endl;
        }
		
        
        if (_kbhit())
        {

            input = _getch();
            if (input == 'a' || input == 'd')
            {
                map[hoehe - 2][player.getPosition()] = ' ';
                player.move(input);
            }
            else if (input == ' ')
            {
                player.move(input);
            }
            else {}
        }
        system("cls");
	}

}
