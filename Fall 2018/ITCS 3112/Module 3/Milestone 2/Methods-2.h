#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to get width from the file stream
int getWidth(std::ifstream& file){
    int info;
    file >> info;
    return info;
}

// Function to get height from the file stream
int getHeight(std::ifstream& file){
    int info;
    file >> info;
    return info;
}

// Function to fill the array and find Max
int fillArrayAndMax(int *arr, int size, int max, std::ifstream& file){
    // Loop to Fill Array
    for (int i = 0; i < size; i++){
        file >> arr[i];
        //Find max value
        if (arr[i] >= max){
            max = arr[i];
            }
            }
    return max;
}

// Function to find Min value
int findMin(int *arr, int size, int min){
    min = arr[0];
    for (int i = 0; i < size; i++){
        if (arr[i] < min){
            min = arr[i];
            }
            }
    return min;
}

//Function to scale down data
void scale255(int *arr, int max, int min, int size){
    float temp;
    for (int i = 0; i < size; i++){
        temp = ((float)(arr[i] - min)) / (float)(max - min);
        arr[i] = temp * (float)255;
        }
    }

// Converts the data from coordinate to location
int twoDto1D(int width, int height, int x, int y){
    int spot = 0;
    spot = ((y)*width) + x;
    return spot;
}

// Finds minimun difference_type
int mindiff(int *arr,int up, int mid, int down, int current){
    int one = abs(arr[current] - arr[up]);
    int two = abs(arr[current] - arr[mid]);
    int three = abs(arr[current] - arr[down]);

    if ((one <= two) && (one <= three)){
        return up;
        }
    else if ((two <= one) && (two <= three)){
        return mid;
        }
    else if ((three <= one) && (three <= two)){
        return down;
    }
}

//Finds minimum between 2 values
int min2diff(int *arr, int first, int second, int current){
    int one = abs(arr[current] - arr[first]);
    int two = abs(arr[current] - arr[second]);

    if (one <= two){
        return one;
        }
    else {
        return two;
        }
}
