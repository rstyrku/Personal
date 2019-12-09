#include "Square.h"
#include <iostream>

// Constructor
Square::Square(int len, const string & col, string nam){
    length = len;
    color = col;
    name = nam;
}
// Getters and Setters
void Square::setLength(int len){
    length = len;
}

int Square::getLength(){
    return length;
}

// Area Function
float Square::getArea() const {
    return length*length;
}

//Volume Function
float Square::getVolume() const{
    return getArea();
}
