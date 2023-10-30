#include<iostream>
using namespace std;

int main(){
    float n,m,d,o,r;
    cout<<"Enter price of online order: ";
    cin>>n;
    cout<<"Enter price of food at restaurant: ";
    cin>>m;
    d = 0.1;
    o = n - (n * d);
    r = m;
    if(o > r){
        cout<<"Chef should go outside.";
    }
    else if(r > o){
        cout<<"Chef should order food online.";
    }
    else if(r == o){
        cout<<"Chef can eat online or at restaurant.";
    }
    else{
        cout<<"Invalid Input";
    }
    return 0;
}