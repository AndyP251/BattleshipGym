#include "gameFunctionality.h"
#include "Player.h"
#include "Board.h"
#include <string>
#include <sstream>
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

	//ship placement
	while(moveCount <= p1->getShipsLength() && p2->getShipsLength()) {
		
		std::cout << "the current board is: " << std::endl;
		std::cout << p1->board->toString()<<std::endl<<std::endl;

		p1->placeShip(moveCount);
		
		moveCount++;
	}

	int turnMax = 0;

	//gameAction
	while(gameValid && turnMax < 50) {

		string p1Attack = p1->Makeattack();

		
    	int firstNumber, secondNumber;
		std::istringstream ss(p1Attack);
    	// Extract the first number
    	ss >> firstNumber;
    	// Consume the '-' character
    	ss.ignore();
    	// Extract the second number
    	ss >> secondNumber;

		int succHit = p2->takeAttack(firstNumber,secondNumber);
		if(succHit) {std::cout<<std::endl<<"Sucessful Hit!"<<std::endl;}
		else {std::cout<<std::endl<<"Unsucessful Hit!"<<std::endl;}

		std::cout<<p2->board->toString()<<std::endl;

		if (turnMax >= 20) {
			if (p1->checkWinCondition() == 1) {
				std::cout << "\n" << "Player 2 Won!" "\n";
				break;
			}
		}
	}

	std::cout << "Play Again? (Y/N)  ";
	char replay;
	std::cin >> replay;

	if (replay == 'Y') {
		gameFunctionality::runGame();
	}


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