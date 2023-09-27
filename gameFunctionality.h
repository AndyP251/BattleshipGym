#pragma once


#include <string>
#include "Player.h"

class gameFunctionality {
	
	Player* p1;
	Player* p2;
	

public:
	
	gameFunctionality();
	void runGame();
	string::string toString();
};