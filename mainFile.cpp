//main file 1
#include <iostream>
#include <string>

#include "Player.h"
#include "Player.h"
#include "Board.h"
#include "gameFunctionality.h"

using namespace std;
//andrews pull request

int main() {
    std::cout << "This is still testing phase" << std::endl;
    gameFunctionality* gf = new gameFunctionality;

    std::cout << gf->toString() << std::endl;

    delete gf;
    return 0;
}

