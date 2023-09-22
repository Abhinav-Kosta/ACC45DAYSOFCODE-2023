#include<iostream>
using namespace std;

int main(){
    int b;
    cout<<"Enter the percentage of battery: ";
    cin>>b;
    if(b < 0){
        cout<<"Invalid Range.";
    }
    else if(b > 100){
        cout<<"Invalid Range.";
    }
    else if((b >= 0) & (b <= 15)){
        cout<<"Low Battery message will pop.";
    }
    else if((b > 15) & (b <= 100)){
        cout<<"Low Battery message will not appear.";
    }
    else {
        cout<<"Invalid Input";
    }
    return 0;
};