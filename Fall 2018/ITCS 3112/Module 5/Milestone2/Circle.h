#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

//Circle is a subclass of Shape
class Circle : public Shape {
private:
   int radius;   // Private data member

public:
   Circle(int rad = 1, const string & col = "red", string nam = "Circle"); // Constructor
   int getRadius() const;                // Getter
   void setRadius(int radius);     // Setter
   float getArea() const;  // to implement virtual function
   float getVolume() const;
};

#endif
