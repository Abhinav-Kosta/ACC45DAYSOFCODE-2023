#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the seat number: ";
    cin>>n;
    if((n > 0) && (n <= 10)){
        cout<<"Lower Double.";
    }
    else if((n > 10) && (n <= 15)){
        cout<<"Lower Single.";
    }
    else if((n > 15) && (n <= 25)){
        cout<<"Upper Double.";
    }
    else if((n > 25) && (n <= 30)){
        cout<<"Upper Single.";
    }
    else{
        cout<<"Invalid Input.";
    }
    return 0;
}