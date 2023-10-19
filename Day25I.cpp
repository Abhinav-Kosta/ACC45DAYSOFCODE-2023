#include<iostream>
using namespace std;

int main(){
    int a,n,x;
    int arr1[n];
    cout<<"Enter remaining hours: ";
    cin>>a;
    cout<<"Enter total number of time-zones: ";
    cin>>n;
    cout<<"Enter time needed by Chef to complete problem: ";
    cin>>x;
    int i = 0;
    while(i < n){
        cout<<"Enter time zone(in hours): ";
        cin>>arr1[i];
        i++;
    }
    if(x < a){
        cout<<"Remaining time is sufficient.";
    }
    else if(x > a){
        for(int i = 0; i < n; i++){
            if((arr1[i] + a) >= x){
                cout<<"Chef can go to time zone "<<arr1[i]<<endl;
            }
        }
    }
    else{
        cout<<"Invalid Input";
    }
    return 0;
}