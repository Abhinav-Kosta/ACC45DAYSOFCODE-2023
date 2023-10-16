#include<iostream>
using namespace std;

int main(){
    int p1,p2,q1,q2;
    cout<<"Time at which contestant P submit 1st answer: ";
    cin>>p1;
    cout<<"Time at which contestant P submit 2nd answer: ";
    cin>>p2;
    cout<<"Time at which contestant Q submit 1st answer: ";
    cin>>q1;
    cout<<"Time at which contestant Q submit 2nd answer: ";
    cin>>q2;
    if(q2 > p2){
        cout<<"Q won";
    }
    else if(p2 > q2){
        cout<<"P won";
    }
    else if(q2 == p2){
        cout<<"TIE";
    }
    return 0;
}