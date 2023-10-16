#include<iostream>
using namespace std;

int main(){
    int x,y,z,n,a;
    cout<<"Initial amount in Bob's account: ";
    cin>>x;
    cout<<"Amount monthly deposited in Bob's account: ";
    cin>>y;
    cout<<"Amount deducted monthly by Bank: ";
    cin>>z;
    cout<<"Number of months: ";
    cin>>n;
    a = x+(y*n)-(z*n);
    cout<<"Amount remained in Bank: "<<a;
    return 0;
}