
#include "Board.h"
#include <iostream>
using std::string;
using std::cout;

Board::Board() {
	for (int row = 0; row < 10; row++) {
		for (int col = 0; col < 10; col++) {
			board[row][col] = 0; // 0 - empty water, 1 - boat inhabited, 2 - sunken boat 
		}
	}
}

int(*Board::getBoard())[10]{
	return board;
}

void Board::setNewShip(int startRowIDX, int startColIDX, int len, char direction) {
	if(direction=='N') {
		for(int i = 0; i<len; i++) {
			if(i+startRowIDX>=sizeof(Board::board)) {
				//invalid -- implement reset to previous tiles

				//short term fix error message
				std::cout << "INVALID POSITION";
			}
			else {
				Board::board[startRowIDX+i][startColIDX] = 1;
			}
		}
	}
		if(direction=='S') {
		for(int i = 0; i<len; i++) {
			if(startRowIDX-i<=sizeof(Board::board)) {
				//invalid -- implement reset to previous tiles

				//short term fix error message
				std::cout << "INVALID POSITION";
			}
			else {
				Board::board[startRowIDX-i][startColIDX] = 1;
			}
		}
	}
		if(direction=='E') {
		for(int i = 0; i<len; i++) {
			if(i+startColIDX>=sizeof(Board::board[startRowIDX])) {
				//invalid -- implement reset to previous tiles

				//short term fix error message
				std::cout << "INVALID POSITION";
			}
			else {
				Board::board[startRowIDX][startColIDX+i] = 1;
			}
		}
	}
		if(direction=='W') {
		for(int i = 0; i<len; i++) {
			if(startColIDX-i<=sizeof(Board::board[startRowIDX])) {
				//invalid -- implement reset to previous tiles

				//short term fix error message
				std::cout << "INVALID POSITION";
			}
			else {
				Board::board[startRowIDX][startColIDX-i] = 1;
			}
		}
	}
}

string Board::toString() {
	string result = "";
	
	for (int row = 0; row < 10; row++) {
		for (int col = 0; col < 10; col++) {
			result+= std::to_string(board[row][col]) + " ";
		}
		result+="\n";
	}
	return result;
}
