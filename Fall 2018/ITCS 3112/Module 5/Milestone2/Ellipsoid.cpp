#include "Ellipsoid.h"
#include <iostream>
#define PI 3.14159265

//Constructor
Ellipsoid::Ellipsoid(int rad, int rad2, int rad3, const string& col, string nam){
    setRadius(rad);
    setRadius2(rad2);
    radius3 = rad3;
    color = col;
    name = nam;
}

//Getters and Setters
void Ellipsoid::setRadius3(int rad3){
    radius3 = rad3;
}

int Ellipsoid::getRadius3(){
    return radius3;
}

//Virtual Functions
float Ellipsoid::getArea() const{
    return 0;
}

float Ellipsoid::getVolume() const{
    return PI * getRadius() * radius2 * radius3;
}
