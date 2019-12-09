#include <iostream>
using namespace std;

//Make Function
void swapInts(int*a, int*b){
    int temp =*a;
    *a=*b;
    *b=temp;
    }
    
int main()
{
    //Declare Variables
    int num1;
    int num2;
    
    //Have the User enter 2 Numbers
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    
    //Swap Numebers using the method
    swapInts(&num1,&num2);
    
    //Print both numbers
    cout<<"After the swap Number 1 is now: "<<num1<<"."<<endl;
    cout<<"After the swap Number 2 is now: "<<num2<<"."<<endl;
    
    return 0;
}