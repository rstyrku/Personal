#include "Ellipse.h"
#include <iostream>
#define PI 3.14159265

//Constructor
Ellipse::Ellipse(int rad, int rad2, const string& col, string nam){
    setRadius(rad);
    radius2 = rad2;
    color = col;
    name = nam;
}

//Getters and Setters
void Ellipse::setRadius2(int rad2){
    radius2 = rad2;
}

int Ellipse::getRadius2(){
    return radius2;
}

//Virtual Functions
float Ellipse::getArea() const{
    return PI * getRadius() * radius2;
}
