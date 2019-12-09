#include "Cuboid.h"
#include <iostream>
//Constructor
Cuboid::Cuboid(int len, int wid, int hgt, const string & col, string nam){
    length = len;
    width = wid;
    height = hgt;
    color = col;
    name = nam;
}
//Getters and Setters
void Cuboid::setHeight(int hgt){
    height = hgt;
}

int Cuboid::getHeight(){
    return height;
}

//Virtual Functions
float Cuboid::getArea() const{
    return ((2*length * width) + (2 *length * height) + (2*height*width));
}

float Cuboid::getVolume() const{
    return length * width * height;
}
