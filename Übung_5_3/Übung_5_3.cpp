#include <iostream>
#include <conio.h>
#include <thread>
#include <chrono>
#include <ios>
using namespace std;

int position_Bomb[4] = {0};
int position_P[3] = {5,5,1};
int position_E[3] = {13,15,1};

char player = 'P';
char enemy = 'E';
char bomb = 'X';
char Spielfeld[23][33] = {};
char mainmenu[23][33] = {};
char explosion = 'O';
bool game;
string winner;

void menu(){

    for (int y = 0; y <= 21; y++) {
        for (int x = 0; x <= 31; x++) {

            mainmenu[y][x] = ' ';
            if (x == 0)
            {
                mainmenu[y][x] = '|';
            }
            if (x == 31)
            {
                mainmenu[y][x] = '|';
            }
            if (y == 0)
            {
                mainmenu[y][x] = '-';
            }
            if (y == 21)
            {
                mainmenu[y][x] = '-';
            }
            mainmenu[9][9] = 'P';
            mainmenu[9][10] = 'R';
            mainmenu[9][11] = 'E';
            mainmenu[9][12] = 'S';
            mainmenu[9][13] = 'S';
            mainmenu[9][14] = ' ';
            mainmenu[9][15] = 'E';
            mainmenu[9][16] = 'N';
            mainmenu[9][17] = 'T';
            mainmenu[9][18] = 'E';
            mainmenu[9][19] = 'R';
            mainmenu[9][20] = ' ';
            mainmenu[9][21] = 'T';
            mainmenu[9][22] = 'O';
            mainmenu[10][9] = 'S';
            mainmenu[10][10] = 'T';
            mainmenu[10][11] = 'A';
            mainmenu[10][12] = 'R';
            mainmenu[10][13] = 'T';
            mainmenu[10][14] = ' ';
            mainmenu[10][15] = 'T';
            mainmenu[10][16] = 'H';
            mainmenu[10][17] = 'E';
            mainmenu[10][18]= ' ';
            mainmenu[10][19]= 'G';
            mainmenu[10][20] = 'A';
            mainmenu[10][21] = 'M';
            mainmenu[10][22] = 'E';
            
            cout << mainmenu[y][x];
           
        }


        cout << endl;
        
    }
    if (winner != "") {
        cout << winner << endl;
        std::this_thread::sleep_for(5s);
        winner = "";
    }
}
void mapgenerator() {

    for (int y = 0; y <= 21; y++) {
        for (int x = 0; x <= 31; x++) {

            Spielfeld[y][x] = ' ';
            
            if (position_Bomb[0] > 0) { 
                Spielfeld[position_Bomb[1]][position_Bomb[2]] = bomb; 
            
                if (position_Bomb[0] <= 5) {
       

                    for (int b = -2; b <= 2; b++) {

                        Spielfeld[position_Bomb[1]+b][position_Bomb[2]] = explosion;
                        Spielfeld[position_Bomb[1]][position_Bomb[2]+b] = explosion;

                        if (position_P[0] == position_Bomb[1] + b && position_P[1] == position_Bomb[2]) { position_P[2] -= 1; }
                        else if (position_P[0] == position_Bomb[1] && position_P[1] == position_Bomb[2] + b) { position_P[2] -= 1; }
                        if (position_E[0] == position_Bomb[1] + b && position_E[1] == position_Bomb[2]) { position_E[2] -= 1; }
                        else if (position_E[0] == position_Bomb[1] && position_E[1] == position_Bomb[2] + b) { position_E[2] -= 1; }
                    }
                    
                }
            }

            
            Spielfeld[position_P[0]][position_P[1]] = player;
            Spielfeld[position_E[0]][position_E[1]] = enemy;

            

            if (x == 0)
            {
                 Spielfeld[y][x] = '|';
            }
            if (x == 31)
            {
                 Spielfeld[y][x] = '|';
            }
            if (y == 0)
            {
                Spielfeld[y][x] = '-';
            }
            if (y == 21)
            {
                Spielfeld[y][x] = '-';
            }
            cout << Spielfeld[y][x];
        }


        cout << endl;
    }   
    position_Bomb[0]--;
}

void placebomb() {

    int exp_delay = 15;
         //1. Wert = existiert Bombe?; 2. Wert = y-Koordinate; 3. Wert = x-Koordinate; 4.Wert = Durchläufe bis zur Explosion
         position_Bomb[0] = exp_delay;
         position_Bomb[1] = position_P[0];
         position_Bomb[2] = position_P[1];
        

        
    }

void playerMovement() {
    char p1;

    if (_kbhit()) {
        p1 = _getch();
        switch (p1) {
        case 'w':
            if ((position_P[0] - 1) > 0) { position_P[0]--; }
            break;
        case 'a':
            if ((position_P[1] - 1) > 0) { position_P[1]--; }
            break;
        case 's':
            if ((position_P[0]) < 20) { position_P[0]++; }
            break;
        case 'd':
            if ((position_P[1]) < 30) { position_P[1]++; }
            break;
        case ' ':
            placebomb();
            break;
        }
    }

}

void enemyMovement() {
    int i = (rand() % 4) + 1;
    switch (i) {
    case 1:
        if ((position_E[0] - 1) > 0) { position_E[0]--; }
        break;
    case 2:
        if ((position_E[1] - 1) > 0) { position_E[1]--; }
        break;
    case 3:
        if ((position_E[0]) < 20) { position_E[0]++; }
        break;
    case 4:
        if ((position_E[1]) < 30) { position_E[1]++; }
        break;
    }
}
        
void gamelogic() {

    if (position_P[2] <= 0) {
        winner = "Du hast verloren. :(";
        game = 0;
        position_P[0] = 5;
        position_P[1] = 5;
        position_P[2] = 1;

        position_E[0] = 13;
        position_E[1] = 15;
        position_E[2] = 1;

        position_Bomb[0] = 0;
    }
    else if (position_E[2] <= 0) {
        winner = "Du hast gewonnen. :)";
        game = 0;
        position_P[0] = 5;
        position_P[1] = 5;
        position_P[2] = 1;

        position_E[0] = 13;
        position_E[1] = 15;
        position_E[2] = 1;

        position_Bomb[0] = 0;
    }
   
}

int main() {

    game = 0;
    bool menu_loop = 1;
    char i;

    while (menu_loop == 1) {
        menu();
        if (_kbhit()) {
            i = _getch();
            switch (i) {
                case char(13) :
                    game = 1;
                    system("CLS");
                    break;
            }
        }

            while (game == 1) {


                enemyMovement();
                playerMovement();
                mapgenerator();
                gamelogic();

                std::this_thread::sleep_for(200ms);
                system("CLS");
            }
       
            std::this_thread::sleep_for(200ms);
            system("CLS");
        }
    return 0;
    }
    


