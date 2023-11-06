#pragma once  
#include <string>

class Player {
    std::string name;
    int ships[3];
    int points;

public:
    Player();
    int getPoints();
    int placeShip();
 
};