#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    cout<<"Enter the speed of bullet per pixel: ";
    cin>>x;
    cout<<"Enter the distance of goomba in pixel: ";
    cin>>y;
    z = y/x;
    cout<<"Minumum seconds for Mario to fire bullet is "<<z<<".";
    return 0;
}