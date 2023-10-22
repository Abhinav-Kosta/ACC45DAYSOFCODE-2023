#include<iostream>
using namespace std;

int main(){
    int w,x,y,z;
    cout<<"Enter the weight that need to be measured: ";
    cin>>w;
    cout<<"Enter 1st weight: ";
    cin>>x;
    cout<<"Enter 2nd weight: ";
    cin>>y;
    cout<<"Enter 3rd weight: ";
    cin>>z;
    if(w == x)
        cout<<"Yes";
    else if(w == y)
        cout<<"Yes";
    else if(w == z)
        cout<<"Yes";
    else if(w == (x+y))
        cout<<"Yes";
    else if(w == (y+z))
        cout<<"Yes";
    else if(w == (z+x))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}