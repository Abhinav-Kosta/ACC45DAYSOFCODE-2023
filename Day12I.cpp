#include<iostream>
using namespace std;

int main(){
    int l,b;
    cout<<"Enter maximum number of candidies Limak can eat: ";
    cin>>l;
    cout<<"Enter maximum number of candidies Boob can eat: ";
    cin>>b;
    for(int i = 1; i < (l+b);){
        if((i <= l)&&(i <= b)){
            l = l - i;
            i = i + 1;
            cout<<"Limak can eat "<<l<<" more candy."<<endl;
            if(l == 0){
                break;
            }
            b = b - i;
            i = i + 1;
            cout<<"Boob can eat "<<b<<" more candy."<<endl;
            if(b == 0){
                break;
            }
        }
    }
    return 0;
}