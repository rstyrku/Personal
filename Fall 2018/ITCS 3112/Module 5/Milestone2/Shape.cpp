/*
  Roman Styrku
  ITCS 3112 001
  Professor Kalpathi Submaranian
  Module 5 Milestone 2
  Due: Oct 14, 2018 11:59pm
*/

#include <iostream>
#include "Shape.h"
// constructors
Shape::Shape () {
    color = "";
    name = "";
}

Shape::Shape (const string nam, const string col){
    name = nam;
    color = col;
}

// destructor
Shape::~Shape(){
    color = "";
    name = "";
}

//Getters and Setters
void Shape::setColor(string col){
    color = col;
}

string Shape::getColor(){
    return color;
}

void Shape::setName(string nam){
    name = nam;
}

string Shape::getName(){
    return name;
}

// prints the shape's  name, area, volume and color
void Shape::printDims(){
    cout << "Name: " << name << endl;
    cout << "Area: " << getArea() << endl;
    cout << "Volume: " << getVolume() << endl;
    cout << "Color: " << color << endl << endl;

}
