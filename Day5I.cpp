#include<iostream>
using namespace std;

int main(){
    int h,i,j;
    cout<<"Enter total number of hop (only odd): ";
    cin>>h;
    i = h % 2;
    j = (h/2) + 1;
    if(i == 1){
        cout<<"Last hop to be jumped on is "<<j<<" .";
    }
    else {
        cout<<"Invalid Input";
    }
    return 0;
};