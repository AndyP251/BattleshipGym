<<<<<<< HEAD
#pragma once  

#include <string>

class Player {
    std::string name;
    int board[10][10];
    int points;

public:
    Player();
    int getPoints();
 
=======
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
 
>>>>>>> 7569fb57cfc396ec2493d8662406dbfcab8e45f1
};