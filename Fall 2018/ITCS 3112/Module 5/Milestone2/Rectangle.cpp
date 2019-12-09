#include "Rectangle.h"
#include <iostream>

//Constructors
Rectangle::Rectangle(int len, int wid, const string & col, string nam){
    length = len;
    width = wid;
    color = col;
    name = nam;
}

//Getters and Setters
void Rectangle::setWidth(int wid){
    width = wid;
}

int Rectangle::getWidth(){
    return width;
}

float Rectangle::getArea() const{
    return length * width;
};  // to implement virtual function
