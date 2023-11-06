#include "Ship.h"

Ship::Ship() {
    Ship::length = 3;
    Ship::orriention = NORTH;
}
Ship::Ship(int len, ORIENTATION direc) {
    Ship::length = len;
    Ship::orriention = direc;
}
void Ship::setDirection(char direc) {
    switch (direc)
    {
    case 'N':
        Ship::orriention = NORTH;
        break;
    case 'S':
        Ship::orriention = SOUTH;
        break;
    case 'W':
        Ship::orriention = WEST;
        break;
    case 'E':
        Ship::orriention = EAST;
        break;
    default:
        Ship::orriention = NORTH;
        break;
    }
}
int Ship::getLen() {
    return Ship::length;
}