#include<iostream>
using namespace std;

int main(){
    int x,y,r;
    cout<<"Enter total runtime of movie: ";
    cin>>x;
    cout<<"Enter time(even) that need to be watched in 2X speed: ";
    cin>>y;
    if(y % 2 != 0){
        cout<<"Enter 2X speed time in even value.";
    }
    else{
        r = y/2;
        cout<<"Chef will watch movie for "<<(x-r)<<" minutes.";
    }
    return 0;
}