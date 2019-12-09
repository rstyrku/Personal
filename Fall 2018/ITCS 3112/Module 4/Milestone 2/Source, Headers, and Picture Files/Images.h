#pragma once

class Image {
   private:
                   // image dimensions
      int width, height;
                   // pointer to the dynamically allocated image array
      int *image_array;
      int *temp_array;

   public:
      Image();     // constructor - creates an empty image object,
                   // creates an image object by reading the input file
      Image(string input_file);
                   //creates an image object using the given dimensions
      Image (int width, int height);
      ~Image();    // destructor  - provide as many destructors as needed

                   // accessors/mutators
      int getWidth();
      void setWidth(int w);
      int getHeight();
      void setHeight(int h);

                   // set/get an image pixel given row and column addresses
                   // pixel is a 3 element r,g,b triple
      void getImagePixel (int col, int row, int *pixel);
      void setImagePixel (int col, int row, int *pixel);

                   // reads an image from  the given input image file
      void read(string infile);

                   // writes image to file
      void display (ColorGrid *cg);

                   // Converts RGB to grayscale
      void toGrayScale ();

                   // flips the image  horizontally each row of pixesl
      void flipHorizontal();

                   // sets the red component of each pixel to zero
      void flattenRed();

                   // flips the blue component of image about 255
      void negateBlue();
};
