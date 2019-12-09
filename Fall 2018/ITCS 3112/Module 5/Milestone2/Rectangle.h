#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Square.h"

class Rectangle : public Square{
//Private Data Members
private:
    int width;
    friend class Cuboid;
public:
    //Constructor
    Rectangle(int len = 1, int wid = 1, const string & col = "yellow", string nam = "Rectangle");

    //Getters and Setters
    void setWidth(int wid);
    int getWidth();
    float getArea() const;  // to implement virtual function
};

#endif

