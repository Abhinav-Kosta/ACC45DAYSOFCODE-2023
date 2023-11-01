#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter number of friends: ";
    cin>>n;
    cout<<"Enter number of left shoes Chef have: ";
    cin>>m;
    if(m == 0){
        cout<<"Chef need to buy "<<m<<" and "<<n;
        cout<<" left and right shoes respectively.";
    }
    else if(m != 0){
        if(m > n){
            cout<<"Chef need to buy "<<n<<" number of right shoes.";
        }
        else if(m < n){
            cout<<"Chef need to buy "<<n<<" number of right shoes and ";
            cout<<(n-m)<<" number of left shoes.";
        }
        else{
            cout<<"Invalid Input";
        }
    }
    else{
            cout<<"Invalid Input";
        }
    return 0;
}