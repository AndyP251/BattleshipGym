using namespace std;
#include "Player.h"

#include <string>



	Player::Player() {
		this->name = "";
		this->points = 0;
		
		for(int i = 0; i < 3; i++) {ships[i] = i+2;}
		

	}
	int Player::getPoints() {
		return this->points;
	}
	//console input version

	//return 1 for success, 0 for fail
	int Player::placeShip() {
		
		return 0;
	} 


