#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "Circle.h"

class Ellipse : public Circle {
    //Private Data Members
    private:
        int radius2;
        friend class Ellipsoid;
    public:
        //Constructors
        Ellipse(int rad = 1, int rad2 = 1, const string & col = "Green", string nam = "Ellipse");

        //Getters and Setters
        void setRadius2(int rad2);
        int getRadius2();

        //Virtual Functions
        float getArea() const;

};
#endif
