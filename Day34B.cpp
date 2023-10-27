#include<iostream>
using namespace std;

int main(){
    int c;
    cout<<"Enter amount of money: ";
    cin>>c;
    if(c % 10 == 0){
        cout<<"Chef required "<<(c/10)<<" ten(10) denomination coin.";
    }
    else if(c % 10 == 5){
        cout<<"Chef required "<<(c/10)<<" ten(10) denomination coin";
        cout<<" and 1 five(5) denomination coin.";
    }
    else if((c % 10 != 0) && (c % 10 != 5)){
        cout<<"-1";
    }
    else {
        cout<<"Invalid Input";
    }
    return 0;
}