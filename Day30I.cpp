#include<iostream>
using namespace std;

int main(){
    int arrA[3], arrB[3];
    int countA = 0, countB = 0;
    for(int i = 0; i < 1; i++){
        cout<<"Enter run scored by player A: ";
        cin>>arrA[i];
        cout<<"Enter wicket taken by player A: ";
        cin>>arrA[i+1];
        cout<<"Enter catch taken by player A: ";
        cin>>arrA[i+2];
    }
    for(int i = 0; i < 1; i++){
        cout<<"Enter run scored by player B: ";
        cin>>arrB[i];
        cout<<"Enter wicket taken by player B: ";
        cin>>arrB[i+1];
        cout<<"Enter catch taken by player B: ";
        cin>>arrB[i+2];
    }
    for(int i = 0; i < 3; i++){
        if(arrA[i] > arrB[i])
            countA = countA + 1;
        else if(arrB[i] > arrA[i])
            countB = countB + 1;
        else
            cout<<"Invalid outcome";
    }
    if(countA > countB)
        cout<<"Player A is better.";
    else if(countB > countA)
        cout<<"Player B is better.";
    else
        cout<<"Invalid.";
    return 0;
}