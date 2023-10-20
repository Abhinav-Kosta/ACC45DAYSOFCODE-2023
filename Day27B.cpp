#include<iostream>
using namespace std;

int main(){
    int t,p;
    cout<<"Initial position of police: ";
    cin>>p;
    cout<<"Initial position of thief: ";
    cin>>t;
    if(p > t){
        cout<<"Police catch thief after "<<p-t<<" seconds";
        cout<<" by moving left on number line.";
    }
    else if(p < t){
        cout<<"Police catch thief after "<<t-p<<" seconds";
        cout<<" by moving right on number line.";
    }
    else {
        cout<<"Invalid Input";
    }
    return 0;
}