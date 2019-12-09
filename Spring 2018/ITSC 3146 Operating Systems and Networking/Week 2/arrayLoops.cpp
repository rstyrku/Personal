#include <iostream>
using namespace std;

int main(){
    //Declare array.
    int numbers[10];
    int x=0;
    while(x<10){
        cout<<"Enter Number "<<x+1<<": ";
        cin>>numbers[x];
        x++;
    }
    cout<<"Reverse: ";
    x=9;
    while(x>=0){
        cout<<numbers[x]<<" ";
        x--;
    }
    x=0;
    int hold=0;
    while(x<9){
        int y=x+1;
        while (y<10){
            if (numbers[y]<numbers[x]){
                hold=numbers[x];
                numbers[x]=numbers[y];
                numbers[y]=hold;
            }
            y++;
        }
        x++;
    }


    cout<<endl<<"Sorted: ";
    for(x=0;x<10;x++){
        cout<<numbers[x]<<" ";
}
}