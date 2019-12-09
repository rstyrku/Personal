#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape{
//Private Data Members
private:
    //Private members and friends
    int length;
    friend class Cube;
    friend class Rectangle;
    friend class Cuboid;
public:
    //Constructor
    Square(int len = 1, const string & col = "blue", string nam = "Square");

    //Getters and Setters
    void setLength(int len);
    int getLength();

    float getArea() const;  // to implement virtual function
    float getVolume() const;
};

#endif
