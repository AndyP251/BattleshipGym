#include "gameFunctionality.h"
#include "Player.h"
#include "Board.h"
#include <string>
#include <iostream>


using std::string;


gameFunctionality::gameFunctionality() {
	this->p1 = new Player();
	this->p2 = new Player();

	this->gameValid = true;
}

void gameFunctionality::runGame() {
	//test
	std::cout << "Game Starting...";


	int moveCount = 0;

	while(gameValid && moveCount <= 1) {
		
		std::cout << "the current board is: " << std::endl;
		std::cout << p1->board->toString()<<std::endl<<std::endl;

		p1->placeShip(moveCount);
		
		moveCount++;
	}

	std::cout << p1->board->toString()<<std::endl;

}

 // @brief Returns Summary of Game
string gameFunctionality::toString() {
	
	return "toString";
}

void gameFunctionality::setValid(bool val) {
	gameValid = true;
}
bool gameFunctionality::getValid() {
	return gameValid;
}