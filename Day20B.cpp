#include<iostream>
using namespace std;

int main(){
    int v,f,s;
    cout<<"Enter the current volume of TV: ";
    cin>>v;
    cout<<"Enter the volume Chef wants: ";
    cin>>f;
    if(v < f){
        s = f - v;
        cout<<"Chef need to increase the volume by "<<s<<" steps.";
    }
    else if(v > f){
        s = v - f;
        cout<<"Chef need to decrease the volume by "<<s<<" steps.";
    }
    else if(v == f){
        cout<<"No action required.";
    }
    else{
        cout<<"Invalid Input";
    }
    return 0;
}