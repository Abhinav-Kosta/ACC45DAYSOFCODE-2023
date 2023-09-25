#include<iostream>
using namespace std;

int main(){
    int x,y,a;
    cout<<"Enter the volume of water filled in Geyser: ";
    cin>>x;
    cout<<"Enter the total volume of bucket: ";
    cin>>y;
    a = x/(2*y);
    cout<<"The maximum number of people that can bath are "<<a;
    return 0;
}