#include<iostream>
using namespace std;

int main(){
    int x,y,s,d,r;
    cout<<"Enter the total number of steps need to covered(chef at step 0): ";
    cin>>x;
    cout<<"Enter the number of steps Chef can take in one time: ";
    cin>>y;
    cout<<"Minumum number of moves Chef required are "<<((x/y)+(x%y))<<endl;
    return 0;
}