#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter the number: ";
    cin>>n;
    while (n > 0)
    {
        i = n % 10;

        if(i % 5 == 0){
            cout<<"Yes, the number can be rearrange in order";
            cout<<" of multiple of 5."<<endl;
            break;
        } 
        n = n/10;
    }
    cout<<"No, Number cannot be rearranged."<<endl;
    return 0;
};