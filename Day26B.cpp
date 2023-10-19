#include<iostream>
using namespace std;

int main(){
    int n,m;
    int count = 0;
    cout<<"Enter total number of people in Chefland: ";
    cin>>n;
    cout<<"Enter minumum age required to cast vote: ";
    cin>>m;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout<<"Enter age of "<<(i + 1)<<" person: ";
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] >= m){
            count = count + 1;
        }
    }
    cout<<"Number of people that can vote are: "<<count<<endl;
    return 0;
}
