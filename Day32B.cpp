#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter number of slice: ";
    cin>>a;
    if((a == 1) || (a % 2 == 0)){
        cout<<"Yes";
    }
    else if(a % 2 == 1){
        cout<<"No";
    }
    return 0;
}