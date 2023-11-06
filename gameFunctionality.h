#pragma once


#include <string>
#include "Player.h"
#include "Board.h"
using std::string;


class gameFunctionality {
	
	Player* p1;
	Player* p2;
	

public:
	
	gameFunctionality();
	void runGame();
	string toString();
};