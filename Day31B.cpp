#include<iostream>
using namespace std;

int main(){
    int s,x,y,z,r;
    cout<<"Enter total memory(MB) of Chef's phone: ";
    cin>>s;
    cout<<"Enter app X memory: ";
    cin>>x;
    cout<<"Enter app Y memory: ";
    cin>>y;
    cout<<"Enter app Z memory: ";
    cin>>z;
    r = s-(x+y);
    if(r >= z){
        cout<<"Enough memory.";
    }
    else if(r < z){
        if(x > y){
            if(z <= (r+y)){
                cout<<"App Y need to be uninstall.";
            }
            else if(z <= (r+x)){
                cout<<"App X need to be uninstall.";
            }
            else if(z <= (r+x+y)){
                cout<<"Both app need to be uninstall.";
            }
            else{
                cout<<"Insufficient memory.";
            }
        }
        else if(y > x){
            if(z <= (r+x)){
                cout<<"App X need to be uninstall.";
            }
            else if(z <= (r+y)){
                cout<<"App Y need to be uninstall.";
            }
            else if(z <= (r+x+y)){
                cout<<"Both app need to be uninstall.";
            }
            else{
                cout<<"Insufficient memory.";
            }
        }
        else{
            cout<<"Invalid Input.";
        }
    }
    return 0;
}