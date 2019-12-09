#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;
class Shape {      // pure abstract class

     protected:
         string color;         // color of shape

         string name;        // shape name ("Square", "Rectangle",  etc.)

     public:
          Shape ();  // constructor
          Shape (const string nam, const string col);

          ~Shape();    // destructor

           void   setColor(string col);    // set color of shape

           string getColor() ;                // get color of shape


           void   setName(string col);  // set name of shape

           string getName() ;               // get name of shape



           virtual void printDims();      // prints the shape's  name, area, volume and color

                                                    // get shape dimensions

           virtual float  getArea() const = 0;
           virtual float  getVolume() const = 0;
};
#endif
