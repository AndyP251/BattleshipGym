using namespace std;

#include <string>

class Player {

	string name;
	int board [10][10];
	int points;

public:
	Player() {
		this->name = "";
		this->points = 0;
		for (int row = 0; row < 10; row++) {
			for (int col = 0; col < 10; col++) {
				board[row][col] = 0; // 0 - empty water, 1 - boat inhabited, 2 - sunken boat 
			}
		}
	}
	int getPoints() {
		return this->points;
	}
	int(*getBoard())[10]{
		return this->board;
	}

};