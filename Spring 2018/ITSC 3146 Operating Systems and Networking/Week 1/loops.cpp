#include <iostream>
using namespace std;

int main()
{

//Declare all Variables
int x=0;
int pos=0;
int neg=0;
int zero=0;
int sum=0;
double average=0;
int input=0;
//For loop to take inputs. 
for (x=1;x<=10;x++){
    cout<<"Enter a number:";
    cin >> input;
    
    //If statement to check if Positive
    if (input>0){
    pos++;
    }
    
    //If statement to check if Negative
    if (input<0){
    neg++;
    }
    
    //If statement to check if equal to 0
    if (input==0){
    zero++;
    }
    
    //Keeps hold of sum.
    sum=sum+input;
}

//Calculate the average
average=(sum/10);
//Display all outputs.
cout<<"There were "<<pos<<" Positive numbers.\n";
cout<<"There were "<<neg<<" Negative numbers.\n";
cout<< zero<<" of the numbers were zeros;.\n";
cout<<"The sum of all the numbers is: "<<sum<<".\n";
cout<<"The average of all the numbers is:"<<average<<".";

return 0;
}