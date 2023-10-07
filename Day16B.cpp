#include<iostream>
using namespace std;

int main(){
    int n,m,a;
    cout<<"Enter the total number of candies Chef have: ";
    cin>>n;
    cout<<"Enter the number of friends: ";
    cin>>m;
    a = n/m;
    if(n % m != 0){
        cout<<"Chef won't be able to distribute all the candies equally,";
        cout<<"Chef does not satisfy all the conditions.";
    }
    else if(a % 2 != 0){
        cout<<a<<" is not even, Chef doesn't satisfy the conditions.";
    }
    else if(a % 2 == 0){
        cout<<a<<" is even, Chef satisfy all the conditions.";
    }
    else{
        cout<<"Invalid Input";
    }
    return 0;
}