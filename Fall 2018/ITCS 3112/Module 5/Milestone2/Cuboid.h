#ifndef CUBOID_H
#define CUBOID_H

#include "Cube.h"
#include "Rectangle.h"

class Cuboid : public Rectangle {
//Private Data Members
private:
    int height;
public:

    //Constructor
    Cuboid(int len = 1, int wid = 1, int hgt = 1, const string & col = "purple", string nam = "Cuboid");

    //Getters and Setters
    void setHeight(int hgt);
    int getHeight();

    //Virtual Functions
    float getArea() const;
    float getVolume() const;
};

#endif
