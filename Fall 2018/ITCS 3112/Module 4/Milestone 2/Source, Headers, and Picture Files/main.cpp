#include "Images.cpp"

int main(){
    // Initialize Image and Read Data

    Image picture;
    picture.read("Yosemite.ppm");

    //Initialize Bridges for Vizualization
    Bridges::initialize(1, "rstyrku@uncc.edu", "1382655271077");
    Bridges::setTitle("Image Manipulation");

    // Retrieves Height and Width
    int width = picture.getWidth();
    int height = picture.getHeight();

    //Full RGB Picture
    ColorGrid *pic1  = new ColorGrid(height, width, Color(000,000,000));
    picture.display(pic1);

    //Grayscale Picture
    ColorGrid *pic2 = new ColorGrid(height, width, Color(000,000,000));
    picture.toGrayScale();
    picture.display(pic2);

    //Horizontal Flip Picture
    ColorGrid *pic3 = new ColorGrid(height, width, Color(000,000,000));
    picture.flipHorizontal();
    picture.display(pic3);

    //Flatten Red
    ColorGrid *pic4 = new ColorGrid(height, width, Color(000,000,000));
    picture.flattenRed();
    picture.display(pic4);

    //Negate Blue
    ColorGrid *pic5 = new ColorGrid(height, width, Color(000,000,000));
    picture.negateBlue();
    picture.display(pic5);

    //Final Visualization Calls
    Bridges::setDataStructure(pic1);
    Bridges::visualize();
    Bridges::setDataStructure(pic2);
    Bridges::visualize();
    Bridges::setDataStructure(pic3);
    Bridges::visualize();
    Bridges::setDataStructure(pic4);
    Bridges::visualize();
    Bridges::setDataStructure(pic5);
    Bridges::visualize();

    return 0;
}
