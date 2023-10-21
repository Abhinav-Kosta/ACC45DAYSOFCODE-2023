#include<iostream>
using namespace std;

int main(){
    int i,h,c,f;
    cout<<"Enter initial temperature of bathtub: ";
    cin>>i;
    cout<<"Enter required temperature: ";
    cin>>f;
    cout<<"Enter hot water(in litres) Chef have: ";
    cin>>h;
    cout<<"Enter cold water(in litres) Chef have: ";
    cin>>c;
    if(i > f){
        if(c >= (i-f))
            cout<<"Yes it is possible by adding "<<(i-f)<<" litres of cold water.";
        
        else
            cout<<"Insufficient cold water.";
        
    }
    else if(i < f){
        if(h >= (f-i))
            cout<<"Yes it is possible by adding "<<(f-i)<<" litres of hot water.";
        
        else
            cout<<"Insufficient hot water.";
        
    }
    else if(i == f)
        cout<<"No adding of water is required.";
    
    else
        cout<<"Invalid Input";
    
    return 0;
}