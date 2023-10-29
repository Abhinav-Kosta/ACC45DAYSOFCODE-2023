#include<iostream>
using namespace std;

int main(){
    int a,b,m;
    cout<<"Enter points scored by Alice: ";
    cin>>a;
    cout<<"Enter points scored by Bob: ";
    cin>>b;
    m = a+b;
    if(m % 2 == 1){
        m = m + 1;
    }
    cout<<"The turn to serve next is of ";
    if((m/2) % 2 == 0){
        cout<<"Bob's.";
    }
    else if((m/2) % 2 == 1){
        cout<<"Alice's.";
    }
    else {
        cout<<"Invalid Input.";
    }
    return 0;
}