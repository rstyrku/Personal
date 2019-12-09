#include <iostream>
using namespace std;
#include "Cuboid.h"
#include "Ellipsoid.h"
int main() {
Square *sq = new Square();
sq->printDims();
Square *sq2 = new Square(10);
sq2->printDims();
Rectangle *rect = new Rectangle();
rect->setColor ("cyan");
rect->printDims();
Rectangle *rect2 = new Rectangle(5, 10);
rect2->setColor ("green");
rect2->printDims();
Cube *c = new Cube(5, "blue");
c->printDims();
Circle *circ = new Circle(10, "pink");
circ->printDims();
Ellipse *ellipse = new Ellipse (5, 3, "magenta");
ellipse->printDims();
Ellipsoid *ellipsoid = new Ellipsoid (4, 8, 3, "purple");
ellipsoid->printDims();
}
