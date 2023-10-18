#include<iostream>
using namespace std;

int main(){
    int x,y,m;
    cout<<"Enter the number of chocolates Chef have: ";
    cin>>x;
    cout<<"Enter th number of chocolates Chef have to gift: ";
    cin>>y;
    cout<<"Enter the cost of 1 chocolate(in rupees): ";
    cin>>m;
    cout<<"Money need to spend by Chef is equal to "<<(y-x)*m<<" rupees.";
    return 0;
}