#ifndef CUBE_H
#define CUBE_H

#include "Square.h"

class Cube : public Square{
//Private Data Members
private:

public:
    //Constructor
    Cube(int len = 1, const string & col = "orange", string nam = "Cube");

    // Implement virtual functions
    float getArea() const;
    float getVolume() const;
};

#endif

