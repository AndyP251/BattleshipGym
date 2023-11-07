
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

bool Board::checkShipSet(int startRowIDX, int startColIDX, int len, char direction) {
	if(direction=='N') {
		for(int i = 0; i<len; i++) {
			if(i+startRowIDX>=sizeof(Board::board)) {
				//invalid index

				//short term fix error message
				std::cout << "INVALID POSITION";
				return false;
			}
			else if(Board::board[startRowIDX+i][startColIDX] != 0) {
				std::cout << "OCCUPIED POSITION";
				return false;
				
			}
		}
	}
		if(direction=='S') {
		for(int i = 0; i<len; i++) {
			if(startRowIDX-i<=sizeof(Board::board)) {
				//invalid index

				//short term fix error message
				std::cout << "INVALID POSITION";
				return false;
			}
			else if (Board::board[startRowIDX-i][startColIDX] != 0) {
				
				std::cout << "OCCUPIED POSITION";
				return false;
			}
		}
	}
		if(direction=='E') {
		for(int i = 0; i<len; i++) {
			if(i+startColIDX>=sizeof(Board::board[startRowIDX])) {
				//invalid index

				//short term fix error message
				std::cout << "INVALID POSITION";
				return false;
			}
			else if (Board::board[startRowIDX][startColIDX+i] != 0){
				
				std::cout << "OCCUPIED POSITION";
				return false;
			}
		}
	}
		if(direction=='W') {
		for(int i = 0; i<len; i++) {
			if(startColIDX-i<=sizeof(Board::board[startRowIDX])) {
				//invalid index

				//short term fix error message
				std::cout << "INVALID POSITION";
				return false;
			}
			else if (Board::board[startRowIDX][startColIDX-i] != 0){
				
				std::cout << "OCCUPIED POSITION";
				return false;
			}
		}
	}
	return true;
}
bool Board::setNewShip(int startRowIDX, int startColIDX, int len, char direction) {
	
	if(direction=='N') {
		for(int i = 0; i<len; i++) {
			
				Board::board[startRowIDX+i][startColIDX] = 1;
			
		}
	}
	else if(direction=='S') {
		for(int i = 0; i<len; i++) {
				Board::board[startRowIDX-i][startColIDX] = 1;
			
		}
	}
	else if(direction=='E') {
		for(int i = 0; i<len; i++) {
				Board::board[startRowIDX][startColIDX+i] = 1;
			
		}
	}
	else if(direction=='W') {
		for(int i = 0; i<len; i++) {
			Board::board[startRowIDX][startColIDX-i] = 1;
			
		}
	}

	else {
		std::cout<< "invalid input" <<std::endl;
		return false;
	}
	return true;
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
