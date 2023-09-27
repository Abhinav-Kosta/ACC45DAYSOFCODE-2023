#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e;
    cout<<"Enter weight of bag A: ";
    cin>>a;
    cout<<"Enter weight of bag B: ";
    cin>>b;
    cout<<"Enter weight of bag C: ";
    cin>>c;
    cout<<"Enter total weight that can be checked in: ";
    cin>>d;
    cout<<"Enter total weight that can be carried: ";
    cin>>e;
    if((a+b)<=d){
        cout<<"Bag A and Bag B can be checked in."<<endl;
        if(c <= d){
            cout<<"Bag C can be carried."<<endl;
        }
        else if(c > d){
            cout<<"Bag C can not be carried."<<endl;
        }
    }
    else if((a+c)<=d){
        cout<<"Bag A and Bag B can be checked in."<<endl;
        if(b <= d){
            cout<<"Bag C can be carried."<<endl;
        }
        else if(b > d){
            cout<<"Bag C can not be carried."<<endl;
        }
    }
    else if((b+c)<=d){
        cout<<"Bag A and Bag B can be checked in."<<endl;
        if(a <= d){
            cout<<"Bag C can be carried."<<endl;
        }
        else if(a > d){
            cout<<"Bag C can not be carried."<<endl;
        }
    }
    else{
        cout<<"Bag cannot be carried and checked in appropriately."<<endl;
    }
    return 0;
};