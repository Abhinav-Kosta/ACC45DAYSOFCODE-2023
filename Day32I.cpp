#include<iostream>
using namespace std;

int main(){
    int l,r,m,p,c;
    cout<<"Minutes required to write a page: ";
    cin>>l;
    cout<<"Minutes required to write a line of code: ";
    cin>>r;
    cout<<"Minutes Chef have: ";
    cin>>m;
    if(m % l != 0){
        p = (m/l)+1;
    }
    else if(m % l == 0){
        p = m/l;
    }
    else{
        cout<<"Invalid Input";
    }
    c = m/r;
    cout<<"Chef's satisfaction is "<<(p+c)<<"."<<endl;
    return 0;
}