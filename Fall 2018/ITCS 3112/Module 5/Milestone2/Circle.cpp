#include "Circle.h"
#include <iostream>
#define PI 3.14159265

// Constructor
Circle::Circle(int rad, const string & col, string nam){
    color = col;
    radius = rad;
    name = nam;
    }

// Getters
int Circle::getRadius() const {
   return radius;
}

// Setters
void Circle::setRadius(int radius) {
   this->radius = radius;
}

// Implement virtual function inherited for superclass Shape
float Circle::getArea() const {
   return radius * radius * PI;
}

float Circle::getVolume() const{
    return getArea();
}
