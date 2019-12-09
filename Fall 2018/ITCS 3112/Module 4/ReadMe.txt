In this module you will implement  an Image class and perform simple image processing operations on the provided input images. The images will be displayed using the ColorGrid structure that we used in Module 3. This will take the place of writing out the images into disk files and using a third party viewer.
The Image class definitions are as follows:
///////////////////////////////////////////////////////////////////////

class Image {
   private:
                   // image dimensions
      int width, height;
                   // pointer to the dynamically allocated image array
      int *image_array;

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
      read(string infile);

                   // writes image to file
      display (int *image_array);

                   // Converts RGB to grayscale 
      void toGrayScale ();

                   // flips the image  horizontally each row of pixesl
      void flipHorizontal();                   

                   // sets the red component of each pixel to zero
      void flattenRed();

                   // flips the blue component of image about 255
      void negateBlue();
}

Fig. 1:  Image class definition and Interface

 

Specifications/Requirements

Constructors. Implement both constructors and ensure that all data members have valid initial values so that the constructed class is  properly initialized.
Image Representation: Note that we are dealing with color images, with each pixel containing red, green and blue values. Thus, the image array is of size width*height*3. Also note that the initial image might have values in an arbitrary range (see PPM format below). The final displayed image must have R,G,B values in the range 0-255. You may want to scale the original image into this range after reading.
Read Input Image. You will read images in PPM (text) format. This is a simple format with a header containing 3 values: width, height and maxVal,  maxVal representing the maximum of the pixel values, which is useful for scaling. This is followed by a  sequence of RGB triplets. Each pixel is thus represented by 3 integer values. For instance, (255,0, 0) is red at full  intensity.
Display Image. As in Module 3, you will use BRIDGES to display the image using the ColorGrid API.
Image Processing.
toGrayScale.This method will convert the original RGB PPM image into a grayscale image. You can use the following conversion formula:
       grayVal  = R*0.299+G*0.587+0.114*B
where R,G, B are the red, green and blue color components.
flipHorizontal.This function will simply flip the pixels in each row horizontally.
flattenRed. This function will set the red component of all pixels to zero.
negateBlue. This function will flip the blue pixel values around 255 (the max value). For instance, if the blue pixel value is 100, then it becomes 255-100 = 155.
Tasks:

Implement the class methods as specified above.
You will be provided with example color images in PPM format.  You will read in each image and apply each image processing operation on the original image. The image will then be displayed. You can run all the methods and call BRIDGES to visualize them in sequence and you should see 5 images on your BRIDGES web link, one below the other.
Documentation:  You will document your program as before, each function and any complex logic will be fully documented.
Modularity. You may keep the entire class implementation in a header file or split them across two files (Image.h, Image.cpp).  The driver should be in a separate file. Declarations should generally be in header files.