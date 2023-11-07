//main file 1
#include <iostream>
#include <string>


#include "Board.h"
#include "gameFunctionality.h"

using namespace std;


int main() {
    std::cout << "This is still testing phase" << std::endl;
    gameFunctionality* gf = new gameFunctionality;
    gf->runGame();
    std::cout << gf->toString() << std::endl;

    delete gf;
    return 0;
}



//todo:

/*

 - fix placeCheck and shipSet functions
        - n/s inverted and false invalid calls


*/



