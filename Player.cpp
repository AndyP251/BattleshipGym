<<<<<<< HEAD
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

=======
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

>>>>>>> 7569fb57cfc396ec2493d8662406dbfcab8e45f1
