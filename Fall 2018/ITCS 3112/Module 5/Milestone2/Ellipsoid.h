#ifndef ELLIPSOID_H
#define ELLIPSODE_H

#include "Ellipse.h"

class Ellipsoid : public Ellipse {
    //Private Data Members
    private:
        int radius3;
    public:
        //Constructors
        Ellipsoid(int rad = 1, int rad2 = 1, int rad3 = 1, const string & col = "Green", string nam = "Ellipsoid");

        //Getters and Setters
        void setRadius3(int rad3);
        int getRadius3();

        //Virtual Functions
        float getArea() const;
        float getVolume() const;

};
#endif
