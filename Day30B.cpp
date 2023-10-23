#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Number of plates Chef prepared: ";
    cin>>x;
    cout<<"Number of plate each neighbour took: ";
    cin>>y;
    if(x >= (20*y))
        cout<<"Chef can feed all neighbours fully.";
    else if((x < (20*y)) && (x >= 0))
        cout<<"Chef can feed "<<(x/y)<<" neighbours fully.";
    else
        cout<<"Invalid Input";
    return 0;
}