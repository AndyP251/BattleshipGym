#pragma once  
#include <string>
#include "Board.h"

class Player {
    std::string name;



    int ships[5];
    int points;
    
    int getAttackRow();
    int getAttackCol();

public:
    Player();
    int getPoints();
    int placeShip(int);
    Board* board;
    int getShipsLength();

    //gameplay
    string Makeattack();


    int takeAttack(int row, int col);
 
};