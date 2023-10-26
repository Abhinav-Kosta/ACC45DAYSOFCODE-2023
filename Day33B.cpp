#include<iostream>
using namespace std;

int main(){
    int ae,ai,be,bi,ce;
    cout<<"Enter amount of export of country A: ";
    cin>>ae;
    cout<<"Enter amount of import of country A: ";
    cin>>ai;
    cout<<"Enter amount of export of country B: ";
    cin>>be;
    cout<<"Enter amount of import of country B: ";
    cin>>bi;
    ce = -((ae - ai) + (be - bi));
    if(ce > 0){
        cout<<"Trade is surpulous.";
    }
    else if(ce <= 0){
        cout<<"No Trade surpulous.";
    }
    else{
        cout<<"Invalid.";
    }
    return 0;
}