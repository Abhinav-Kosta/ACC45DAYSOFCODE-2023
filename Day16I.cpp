#include<iostream>
using namespace std;

int main(){
    int n,x,y,z;
    int arr[3];
    cout<<"Enter total number of chocolates: ";
    cin>>n;
    if(n < 4){
        cout<<"Incorrect Input(N >= 4).";
    }
    else if(n % 2 == 1){
        x = (n/2);
        if(x % 2 == 1){
            x = x;
        }
        else if(x % 2 == 0){
            x = x+1;
        }
        y = n - x;
        z = y/2;
        arr[0] = x;
        arr[1] = z;
        arr[2] = z;
    }
    else if(n % 2 == 0){
        x = n - 2;
        arr[0] = x;
        arr[1] = 1;
        arr[2] = 1;
    }
    cout<<arr[0]<<" ";
    cout<<arr[1]<<" ";
    cout<<arr[2]<<" ";
    return 0;
}