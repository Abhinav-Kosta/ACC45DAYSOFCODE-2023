#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,x,l,b,a,p;
    int maxNo = INT_MIN;
    cout<<"Enter the total number of tablets: ";
    cin>>n;
    cout<<"Enter Chef's budget for tablet: ";
    cin>>x;
    int arr1[n], arr2[n], arr3[n];
    for(int i = 0; i < n; i++){
        cout<<"Enter Tablets length: ";
        cin>>l;
        cout<<"Enter Tablet's breadth: ";
        cin>>b;
        a = l * b;
        cout<<"Enter cost of Tablet: ";
        cin>>p;
        arr1[i] = a;
        arr2[i] = p;
    }
    for(int i = 0; i < n; i++){
        if(arr2[i] > x){
            break;
        }
        else if(arr2[i] <= x){
            arr3[i] == arr1[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(arr3[i] > maxNo){
            maxNo = arr3[i];
        }
    }
    cout<<"Chef should buy tablet with area of "<<maxNo;
    return 0;
};