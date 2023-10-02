#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the total number of mountains: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        arr[i];
        cout<<"Enter the hight of "<<(i+1)<<" peak: ";
        cin>>arr[i];
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] >= count){
            count = arr[i];
        }
        cout<<"Base will be on peak with height of "<<count<<"."<<endl;
    }
    return 0;
}