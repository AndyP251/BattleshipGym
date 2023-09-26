<<<<<<< HEAD
#include "Board.h"

int board[10][10];


Board::Board() {
	for (int row = 0; row < 10; row++) {
		for (int col = 0; col < 10; col++) {
			board[row][col] = 0; // 0 - empty water, 1 - boat inhabited, 2 - sunken boat 
		}
	}
}


int(*Board::getBoard())[10]{
	return Board;
=======
#include "Board.h"

Board::Board() {
	for (int row = 0; row < 10; row++) {
		for (int col = 0; col < 10; col++) {
			board[row][col] = 0; // 0 - empty water, 1 - boat inhabited, 2 - sunken boat 
		}
	}
}


int(*Board::getBoard())[10]{
	return Board;
>>>>>>> 7569fb57cfc396ec2493d8662406dbfcab8e45f1
}