#include<iostream>
using namespace std;

int main(){
    int n,x;
    cout<<"Enter number of Days: ";
    cin>>n;
    if(n <= 0){
        cout<<"Invalid Input.";
    }
    else if(n == 1){
        cout<<"Chef can eat his favourite meal for 0 days.";
    }
    else if(n == 2){
        cout<<"Chef can eat his favourite meal for 1 days.";
    }
    else if(n > 2){
        x = (n-2)/7;
        cout<<"Days Chef can eat his favourite food are "<<(1+x);
    }
    return 0;
}