#include<iostream>
using namespace std;

int main(){
    int a;
    float p;
    cout<<"Enter total number of working days: ";
    cin>>a;
    float arr[a];
    float count = 0;
    for(int i = 0; i < a; i++){
        cout<<"Chef is present(1) or absent(0) on "<<i+1<<" day: ";
        cin>>arr[i];
    }
    for(int i = 0; i < a; i++){
        if(arr[i] == 1){
            count = count + 1;
        }
    }
    p = ((count/a) * 100);
    if(p >= 75){
        cout<<"Chef can give exams as his attendance is: "<<p;
    }
    else if(p < 75){
        cout<<"Chef can not give exams as his attendance is: "<<p;
    }
    else {
        cout<<"Invalid Input";
    }
    return 0;
}