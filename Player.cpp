using namespace std;
#include "Player.h"
#include "Board.h"
#include <string>


	Player::Player() {
		this->name = "";
		this->points = 0;
		board_ = new Board;

	}
	int Player::getPoints() {
		return this->points;
	}

