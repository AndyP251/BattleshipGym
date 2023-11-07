using namespace std;
#include "Player.h"
#include <string>
#include <iostream>
#include "Board.h"



	Player::Player() {
		this->name = "";
		this->points = 0;

		board = new Board();
		
		for(int i = 0; i < 3; i++) {ships[i] = i+2;}
		

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


