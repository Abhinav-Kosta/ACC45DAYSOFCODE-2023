#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter Alice's score: ";
    cin>>a;
    cout<<"Enter Bob's score: ";
    cin>>b;
    if(a>b){
        cout<<"If Alice score "<<(7-a)<<" consecutive points";
        cout<<" Game will be over";
    }
    else if(b>a){
        cout<<"If Bob score "<<(7-b)<<" consecutive points";
        cout<<" Game will be over";
    }
    else if(a == b){
        cout<<"If Alice or Bob score "<<(7-a)<<" consecutive points";
        cout<<" Game will be over";
    }
    return 0;
}