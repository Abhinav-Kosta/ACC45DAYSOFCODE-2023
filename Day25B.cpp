#include<iostream>
using namespace std;

int main(){
    int p,m;
    cout<<"Enter total number of problems: ";
    cin>>p;
    cout<<"Enter total marks obtained by Chef: ";
    cin>>m;
    if(m <= (p*4)){
        if(m % 4 == 0){
            cout<<"Yes it is possible.";
        } else {
            cout<<"NO, It is not possible.";
        }
    } else {
        cout<<"Marks obtained is incorrect.";
    }
    return 0;
}