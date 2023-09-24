#include<iostream>
using namespace std;

int main(){
    //Let the number of followers of instagram account be x.
    //Let the number of following of that account be y.
    //According to question:-
    //spam account = y > 10x
    int x,y;
    cout<<"Enter the number of followers: ";
    cin>>x;
    cout<<"Enter the number of following: ";
    cin>>y;
    if(y > (10 * x)){
        cout<<"Account is a spam account.";
    } else {
        cout<<"Legal account.";
    }
    return 0;
}