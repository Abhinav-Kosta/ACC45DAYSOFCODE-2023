#include<iostream>
using namespace std;

int main(){
    int m,c,i,a;
    cout<<"Enter the marks obtained by Chef: ";
    cin>>m;
    c = m/3;
    i = m%3;
    a = 3-i;
    if(a == 3){
        cout<<"No incorrect answers."<<endl;
        cout<<"Number of correct answers are "<<c<<endl;
    }
    else if(a == 2){
        cout<<"Number of incorrect answers are 2."<<endl;
        cout<<"Number of correct answers are "<<(c+1)<<endl;
    }
    else if(a == 1){
        cout<<"Number of incorrect answers are 1."<<endl;
        cout<<"Number of correct answers are "<<(c+1)<<endl;
    }
    else{
        cout<<"Invalid Input";
    }
    return 0;
}