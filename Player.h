#pragma once  

#include <string>

class Player {
    std::string name;
    int board[10][10];
    int points;

public:
    Player();
    int getPoints();
    int(*getBoard())[10];
};