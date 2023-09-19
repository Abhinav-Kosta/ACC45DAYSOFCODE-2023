#include<iostream>
using namespace std;

int main(){
    int x,y,z,t,n;
    cout<<"Enter the cost of chocolate: ";
    cin>>z;
    cout<<"Enter the number of 5 rupee coin Chef have: ";
    cin>>x;
    cout<<"Enter the number of 10 rupee coin Chef have: ";
    cin>>y;
    t = (5*x) + (10*y);
    n = t/z;
    cout<<n<<" are the total number of chocolates Chef can buy for Chefina.";
    return 0;
};