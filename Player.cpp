using namespace std;
#include "Player.h"
#include <string>
#include <iostream>
#include <limits>
#include "Board.h"



	Player::Player() {
		this->name = "";
		this->points = 0;

		board = new Board();
		
		for(int i = 0; i < getShipsLength(); i++) {ships[i] = i+2;}
		

	}
	int Player::getPoints() {
		return this->points;
	}
	//console input version

	//return 1 for success, 0 for fail
	int Player::placeShip(int moveCount) {
		
		cout << "You are currently placing your " << ships[moveCount] << " unit ship." << endl;
		char direction;
		cout << "The Ship should face which direction? (N,W,E,S):  ";
		cin >> direction;

		int rowIDX;
		cout << "What Row do you want to place this on? ";
		cin >> rowIDX;

		int colIDX;
		cout << "What Column do you want to place this on? ";
		cin >> colIDX;

		if(board->checkShipSet(rowIDX-1,colIDX-1,ships[moveCount],direction)==true) {
			
			bool functionValidation = false;
			int maxAttempts = 3;  // Maximum number of attempts

			for (int attempt = 0; attempt < maxAttempts; ++attempt) {
    			functionValidation = board->setNewShip(rowIDX-1, colIDX-1, ships[moveCount], direction);
    			if (functionValidation) {
       				 // Ship placement was successful, exit the loop
       				 break;
    			} else {
        			// Handle the case where placement failed (e.g., display an error message)
       				 std::cout << "Ship placement failed. Please try again." << std::endl;
				
   						 }
				}
			cout << endl << "Placement Success!"<<endl<<endl;	
		}
		return 0;
	} 

	int Player::getShipsLength() {
		return (sizeof(Player::ships)/sizeof(Player::ships[0]));
	}
	/**
	 * @brief makes attack on other players board
	 * 
	 * @return string, returns row, column separated by '-', e.g. "3-9"
	 */
	string Player::Makeattack() {
		int row = getAttackRow();
		int col = getAttackCol();

		return std::to_string(row) + "-" + std::to_string(col);

	}

	int Player::getAttackRow() {
		int row;
		std::cout<<"Which row would you like to attack?  ";
		
		
   		while (true) {
        	if (std::cin >> row) {
            	// Input is a valid integer
            	std::cout << std::endl;
            	break;
        	} else {
            	// Input is not a valid integer
            	std::cout << "Invalid input. Please enter a valid row number: ";
            	std::cin.clear();  // Clear error state
            	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard the invalid input
        }
    	}

		if(row<=10&&row>0) {return row;}
		else return 1; //default attack row is one if invalid integer

	}
	int Player::getAttackCol() {
		int col;
		std::cout<<"Which column would you like to attack?  ";
		
		
   		while (true) {
        	if (std::cin >> col) {
            	// Input is a valid integer
            	std::cout << std::endl;
            	break;
        	} else {
            	// Input is not a valid integer
            	std::cout << "Invalid input. Please enter a valid column: ";
            	std::cin.clear();  // Clear error state
            	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard the invalid input
        }
    
		}
	
		if(col<=10&&col>0) {return col;}
		else return 1; //default attack col is one if invalid integer
	}
	/**
	 * @brief changes board after other player attacks 
	 * @param row - row to attack
	 * @param col - column to attack
	 * @return int, 1 for succesful hit , 0 for non-succesful (init val is 0 || 2)
	 */
	int Player::takeAttack(int row, int col) {
		int initVal = this->board->getVal(row,col);
		this->board->changeVal(row,col,2); //2 for hit

		if(initVal == 1) {return 1;}
		return 0;
	}

