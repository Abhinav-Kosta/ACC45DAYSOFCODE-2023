#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter the money Chef have: ";
    cin>>x;
    cout<<"Enter the price of chocolate: ";
    cin>>y;
    if(x < y){
        cout<<"Chef can not buy any chocolate.";
    }
    else if(x > y){
        cout<<"Chef can buy "<<(x/y)<<" chocolate(s).";
    }
    else{
        cout<<"Invalid Input";
    }
};