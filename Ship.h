#pragma once

enum Direction {NORTH, SOUTH, EAST, WEST};

class Ship{
    int length;

    Direction direction;

    int position[2]; 

    public:
        Ship();
        Ship(int, Direction, int[]);
        void setDirection(char);
};

