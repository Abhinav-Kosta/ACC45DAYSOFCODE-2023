#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of days: ";
    cin>>n;
    int i = 0;
    int arr1[n], arr2[n];
    while (i < n)
    {
        cout<<"Enter no. of questions solved by Om on "<<(i+1)<<" day: ";
        cin>>arr1[i];
        cout<<"Enter no. of questions solved by Addy on "<<(i+1)<<" day: ";
        cin>>arr2[i];
        i+=1;
    }
    for(int i = 0; i < n; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}