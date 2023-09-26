using namespace std;
#include "Player.h"

#include <string>


	string name;
	int points;

	Player::Player() {
		this->name = "";
		this->points = 0;

	}
	int Player::getPoints() {
		return this->points;
	}

