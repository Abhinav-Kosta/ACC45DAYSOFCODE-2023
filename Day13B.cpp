#include<iostream>
using namespace std;

int main(){
    int x,y,a,b;
    cout<<"Enter amount of Helium-3 on moon(in g): ";
    cin>>x;
    cout<<"Enter amount of energy produced by 1g of Helium-2: ";
    cin>>y;
    cout<<"Enter number of year(s) government asked for energy: ";
    cin>>a;
    cout<<"Enter energy required per year for chefland: ";
    cin>>b;
    if((x*y)>=(a*b)){
        cout<<"YES, funding will be provided.";
    }
    else if((x*y) < (a*b)){
        cout<<"NO, funding will not be provided.";
    }
    else{
        cout<<"Invalid Input";
    }
    return 0;
}