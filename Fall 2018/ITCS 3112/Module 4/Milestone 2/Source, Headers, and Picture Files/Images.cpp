#pragma once
#include <iostream>
#include <fstream>
#include "Bridges.h"
#include "Color.h"
#include "ColorGrid.h"

using namespace std;
using namespace bridges;

#include "Images.h"
//Constructor
Image::Image(){
    width = NULL;
    height = NULL;
    image_array = NULL;
    temp_array = NULL;
    }

// destructor  - provide as many destructors as needed
Image::~Image(){
    width = NULL;
    height = NULL;
    image_array = NULL;
    temp_array = NULL;
    }

// accessors/mutators
int Image::getWidth(){
    return width;
    }

void Image::setWidth(int w){
    width = w;
    }

int Image::getHeight(){
    return height;
    }

void Image::setHeight(int h){
    height = h;
    }

// reads an image from  the given input image file
// writes image to file
void Image::read(string infile){
    string temp;

    // Open File
    ifstream file;
    file.open(infile);

    //Stream P3 to temp
    file >> temp;

    //Stream Width and Height and Max
    file >> width;
    file >> height;
    int larg;
    file >> larg;

    //Stream Data
    int area = width * height;
    int tempsize = area * 3;
    image_array = new int [tempsize];
    temp_array = new int [tempsize];
    for(int i = 0; i < tempsize; i++){
        float temp;
        int temp2;
        file >> temp2;
        temp = ((float)(temp2)) / (float)(larg);
        image_array[i] = temp * (float)255;
        temp_array[i] = temp * (float)255;
        }
    }

// Displays the Image
void Image::display (ColorGrid *cg){

    //Sets Size and Start Height;
    int area = width * height;

    //Display Loop
    for(int i = 0; i < area * 3; i = i+3){
        int pix = i/3;
        int row = pix % width;
        int col = pix / width;
        cg->set(col, row, Color(image_array[i], image_array[i + 1], image_array[i + 2]));
        }
    }

// Converts RGB to grayscale
void Image::toGrayScale (){
    int area = width * height;
    int gray;
    for(int i = 0; i < area * 3; i = i+3){
        gray = ((float)(image_array[i]) * 0.299) + ((float)(image_array[i + 1]) * 0.587) + ((float)(image_array[i + 2]) * 0.114);
        image_array[i] = gray;
        image_array[i + 1] = gray;
        image_array[i + 2] = gray;
        }
    }


// flips the image  horizontally each row of pixesl
void Image::flipHorizontal(){
    int area = width * height;
    int temp1, temp2, temp3;
    for (int j = 0; j < height; j++){
        for(int i = 0; i < width / 2; i++){
            int pix1 = 3 * (j * width + i);
            int pix2 = 3 * (((j + 1) * width) - i);
            temp1 = temp_array[pix1];
            temp2 = temp_array[pix1 + 1];
            temp3 = temp_array[pix1 + 2];
            image_array[pix1] = temp_array[pix2];
            image_array[pix1 + 1] = temp_array[pix2 + 1];
            image_array[pix1 + 2] = temp_array[pix2 + 2];
            image_array[pix2] = temp1;
            image_array[pix2 + 1] = temp2;
            image_array[pix2 + 2] = temp3;
            }
        }
    }

// sets the red component of each pixel to zero
void Image::flattenRed(){
    int area = width * height;
    for(int i = 0; i < area * 3; i++){
        image_array[i] = temp_array[i];
        }
    for(int i = 0; i < area * 3; i = i + 3){
        image_array[i] = 0;
        }
    }

      // flips the blue component of image about 255
void Image::negateBlue(){
    int area = width * height;
    for(int i = 0; i < area * 3; i++){
        image_array[i] = temp_array[i];
        }
    for(int i = 2; i < area * 3; i = i + 3){
        image_array[i] = 255 - image_array[i];
        }
    }
