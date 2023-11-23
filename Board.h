#pragma once  

#include <string>
using std::string;

class Board {

    int board[10][10];
    
    int BOARDSIZE = 10;
    

public:
    Board();
    int(*getBoard())[10];
    bool setNewShip(int startRowIDX, int startColIDX, int len, char direc);
    bool checkShipSet(int startRowIDX, int startColIDX, int len, char direc);
    string toString();

    void changeVal(int row, int column, int value);
    int getVal(int row, int column);

    int checkWin();


};