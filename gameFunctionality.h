#pragma once


#include <string>
#include "Player.h"
#include "Board.h"
using std::string;


class gameFunctionality {
	
	Player* p1;
	Player* p2;
	

	bool gameValid;
	

public:
	
	void setValid(bool);
	bool getValid();

	gameFunctionality();
	void runGame();
	string toString();
};