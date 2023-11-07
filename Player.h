#pragma once  
#include <string>
#include "Board.h"

class Player {
    std::string name;
    int ships[3];
    int points;

public:
    Player();
    int getPoints();
    int placeShip(int);
    Board* board;
 
};