#include "Cube.h"
#include <iostream>
#include <cmath>

//Constructor
Cube::Cube(int len, const string & col, string nam){
    length = len;
    color = col;
    name = nam;
}

// Virtual Functions
float Cube::getArea() const {
    return length * length * 6;
}
float Cube::getVolume() const {
    return (length * length * length);
}
