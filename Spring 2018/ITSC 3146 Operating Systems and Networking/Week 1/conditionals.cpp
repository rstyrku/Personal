#include <iostream>
using namespace std;

int main()
{
    //Declare Variables
    int input=0;
    char again='y';
    while(again=='y'){
        cout<<"Enter a percentage to convert to a letter grade:";
        cin>>input;
        if(input>=90 &&input<=100){
                cout<<"The letter grade is an A";
        }
        
        else if(input>=80 &&input<=89){
                cout<<"The letter grade is an B";
        }
        
        else if(input>=70 &&input<=79){
                cout<<"The letter grade is an C";
        }
        
        else if(input>=60 &&input<=69){
                cout<<"The letter grade is an D";
        }
        else if(input<60){
                cout<<"The letter grade is an F";
        }
        else{
                cout<<"The number wasnt in the categories";
        }
        cout<<"\nDo you want to check another grade. Type 'y' for Yes of 'n' for No.";
        cin>>again;
    }
    return 0;
}