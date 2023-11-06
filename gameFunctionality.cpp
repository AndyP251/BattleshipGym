#include "gameFunctionality.h"
#include "Player.h"
#include "Board.h"
#include <string>
#include <iostream>


using std::string;


gameFunctionality::gameFunctionality() {
	this->p1 = new Player();
	this->p2 = new Player();
	this->board = new Board();
}

void gameFunctionality::runGame() {
	//test
	std::cout << "Game Starting...";

	std::cout << "the current board is: " << std::endl;
	std::cout << board->toString()<<std::endl<<std::endl;


}

string gameFunctionality::toString() {
	return "toString";
}