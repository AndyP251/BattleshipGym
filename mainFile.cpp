//main file 1
#include <iostream>
#include <string>

#include "Player.h"

using namespace std;
//andrews pull request

int main() {
    std::cout << "This is still testing phase" << std::endl;
    Player* p = new Player();
    std::cout << p->getPoints();
    delete p;
    return 0;
}

