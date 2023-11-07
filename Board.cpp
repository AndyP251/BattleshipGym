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

int(*Board::getBoard())[10] {
    return board;
}

void Board::changeVal(int row, int column, int value = 2) {
	board[row][column] = value;
}
int Board::getVal(int row, int column) {
	return board[row][column];
}

bool Board::checkShipSet(int startRowIDX, int startColIDX, int len, char direction) {
    if (direction == 'S') {
        for (int i = 0; i < len; i++) {
            if (startRowIDX + i >= 10) {
                std::cout << "INVALID POSITION" << std::endl;
                return false;
            } else if (Board::board[startRowIDX + i][startColIDX] != 0) {
                std::cout << "OCCUPIED POSITION" << std::endl;
                return false;
            }
        }
    } else if (direction == 'N') {
        for (int i = 0; i < len; i++) {
            if (startRowIDX - i < 0) {
                std::cout << "INVALID POSITION" << std::endl;
                return false;
            } else if (Board::board[startRowIDX - i][startColIDX] != 0) {
                std::cout << "OCCUPIED POSITION" << std::endl;
                return false;
            }
        }
    } else if (direction == 'W') {
        for (int i = 0; i < len; i++) {
            if (startColIDX - i < 0) {
                std::cout << "INVALID POSITION" << std::endl;
                return false;
            } else if (Board::board[startRowIDX][startColIDX - i] != 0) {
                std::cout << "OCCUPIED POSITION" << std::endl;
                return false;
            }
        }
    } else if (direction == 'E') {
        for (int i = 0; i < len; i++) {
            if (startColIDX + i >= 10) {
                std::cout << "INVALID POSITION" << std::endl;
                return false;
            } else if (Board::board[startRowIDX][startColIDX + i] != 0) {
                std::cout << "OCCUPIED POSITION" << std::endl;
                return false;
            }
        }
    } else {
        std::cout << "Invalid input" << std::endl;
        return false;
    }
    return true;
}

bool Board::setNewShip(int startRowIDX, int startColIDX, int len, char direction) {
    if (direction == 'N') {
        for (int i = 0; i < len; i++) {
            Board::board[startRowIDX - i][startColIDX] = 1;
        }
    } else if (direction == 'S') {
        for (int i = 0; i < len; i++) {
            Board::board[startRowIDX + i][startColIDX] = 1;
        }
    } else if (direction == 'E') {
        for (int i = 0; i < len; i++) {
            Board::board[startRowIDX][startColIDX + i] = 1;
        }
    } else if (direction == 'W') {
        for (int i = 0; i < len; i++) {
            Board::board[startRowIDX][startColIDX - i] = 1;
        }
    } else {
        std::cout << "Invalid input" << std::endl;
        return false;
    }
    return true;
}

string Board::toString() {
    string result = "";
    for (int row = 0; row < 10; row++) {
        for (int col = 0; col < 10; col++) {
            result += std::to_string(board[row][col]) + " ";
        }
        result += "\n";
    }
    return result;
}
