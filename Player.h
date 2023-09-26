#pragma once  
#include "Board.h"
#include <string>

class Player {
    std::string name;
    Board* board_;
    int points;

public:
    Player();
    int getPoints();
 
};