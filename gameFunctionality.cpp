#include "gameFunctionality.h"
#include "Player.h"
#include "Board.h"
#include <string>
#include <iostream>


using std::string;


gameFunctionality::gameFunctionality() {
	this->p1 = new Player;
	this->p2 = new Player;
}

void gameFunctionality::runGame() {
	//test
	std::cout << "this is a test";
}

string gameFunctionality::toString() {
	return " ";
}