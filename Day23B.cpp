#include<iostream>
using namespace std;

int main(){
    int a,b,c,n;
    cout<<"Enter amount of money Alice have: ";
    cin>>a;
    cout<<"Enter amount of money Bob have: ";
    cin>>b;
    cout<<"Enter amount of money Charlie have: ";
    cin>>c;
    cout<<"Enter cost of Netflix subscription: ";
    cin>>n;
    if((a+b) >= n){
        cout<<"Alice and Bob together can buy the subscription.";
    }
    else if((b+c) >= n){
        cout<<"Bob and Charlie together can buy the subscription.";
    }
    else if((c+a) >= n){
        cout<<"Charlie and Alice together can buy the subscription.";
    }
    else{
        cout<<"No one can buy the subscription.";
    }
    return 0;
}