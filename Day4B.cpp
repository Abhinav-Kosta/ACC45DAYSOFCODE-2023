#include<iostream>
using namespace std;

int main(){
    int q,s,a;
    cout<<"Enter the daily quota of chocolate for Chef(can not exceed 100): ";
    cin>>q;
    if(q > 100){
        cout<<"Sorry! Can not exceed 100";
    } else if (q < 0){
        cout<<"Invalid Input";
    } else {
        cout<<"Enter the number of chocolate sold: ";
        cin>>s;
        if (q >= s){
            cout<<"Chef earns "<<s<<" rupees.";
        } else {
            a = q + (2*(s - q));
            cout<<"Chef earns "<<a<<" rupess.";
        }
    }
    return 0;
}