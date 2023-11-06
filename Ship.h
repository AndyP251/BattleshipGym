#pragma once

enum ORIENTATION {NORTH,SOUTH,WEST,EAST};

class Ship{
    int length;
    ORIENTATION orriention;
    

    public:
        Ship();
        Ship(int, ORIENTATION);
        void setDirection(char);
        int getLen();

};

