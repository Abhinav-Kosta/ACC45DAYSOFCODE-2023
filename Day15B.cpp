#include<iostream>
using namespace std;

int main(){
    int n,x,y;
    cout<<"Enter total number of cards: ";
    cin>>n;
    cout<<"Enter the number of face-up cards: ";
    cin>>x;
    if((x == n)||(x == 0)){
        cout<<"All the cards in same position, no action required.";
    }
    else if((x != 0)&&(x < n)){
        y = n-x;
        if(x > y){
            cout<<"We can flip "<<y<<" cards which are initially facing-down.";
        }
        else {
            cout<<"We can flip "<<x<<" cards which are initially facing-up.";
        }
    }
    else {
        cout<<"Invalid Input.";
    }
    return 0;
}