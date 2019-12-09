In this project, you will implement a simple object hierarchy of Shapes. The Shape hierarchy will have the following structure:

 

 

Shape Object Hierarchy to be Implemented

 

Fig. 1: Shape Hierarchy. Shape is the most abstract class; as you move down the hierarchy, the classes are becoming more specialized.

class Shape {      // pure abstract class

     protected:
         string color;         // color of shape

         string name;        // shape name ("Square", "Rectangle",  etc.)

     public:
          Shape ();  // constructor
          Shape (const string name, const string col);

          ~Shape()    // destructor


           void   setColor(string col);    // set color of shape

           string getColor() ;                // get color of shape


           void   setName(string col);  // set name of shape

           string getName() ;               // get name of shape

 

           virtual void printDims();      // prints the shape's  name, area, volume and color

                                                    // get shape dimensions

           virtual float  getArea() const = 0;     
           virtual float  getVolume() const = 0;
};

Shape Hierarchy Details:

Shape: This will be implemented as a pure abstract class  and will hold attributes that are common to all its descendants. It will represent  dimensions internally using an array of integers (for simplicity,  we will assume all dimensions are integers). Each shape will also have a color,  represented as a string of characters.

Square: Derived from Shape, has a single coordinate that represents the side length.

Rectangle: Derived from rectangle, has also a second coordinate that represents its width.

Cube: 3D equivalent of a square.  Adds a third dimension. Area and volume are defined.

Cuboid:  3D equivalent of a rectangle, adds a depth dimension and defines area (surface area) and a volume.

Circle:  Circle has a single dimension, representing its radius. Area is  Pi*radius*radius

Ellipse:  Derived from ellipse, has an additional dimension; the two dimension represent the major and minor axes of the ellipse. Area is Pi*major-axis*minor axis.

Ellipsoid: 3D equivalent of an ellipse. Volume = Pi*a*b*c, where a, b, c represent the 3 axes of the ellipsoid. Ignore area and return 0, as the formula is complicated

///////////////////////////////////////////////////////////////////////

Tasks/Requirements:

Implement each of the classes in the above hierarchy. A good start to the project is provided in this link (Links to an external site.)Links to an external site.
The shape constructor can allocate a fixed number of values for its coordinates array.
Each of the classes will have at least two constructors, (1) an empty constructor that will initialize the class with default values for all its data members, and a second constructor that will take its appropriate dimensions. For instance, a rectangle will have a constructor to take its length and width (Rectangle(int length, int width)
At the highest level, a shape has no knowledge of dimensions and simply has a name, a color and has a print function to print its area and volume, all of which are virtual functions
Each shape will have methods for setting its dimensions. Pay close attention to what goes into the private and public sections of each shape.
Note the pure virtual functions to compute the area and if relevant, the volume of the shape.  These should return valid values for each shape; for instance, getVolume() on a circle should return 0.
Each class must be defined in its own .h file.  A driver program will be provided with enough information for testing your implementation. The driver program will be in its own .cpp file.
Each class should be fully documented, modular and formatted with proper indentation.