#include<iostream>
using namespace std;

int main(){
    int a,b;
    char c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter operator(+,-,*,/,%): ";
    cin>>c;
    if(c == '+'){
        cout<<"Result is "<<(a+b);
    }
    else if(c == '-'){
        cout<<"Result is "<<(a-b);
    }
    else if(c == '*'){
        cout<<"Result is "<<(a*b);
    }
    else if(c == '/'){
        cout<<"Result is "<<(a/b);
    }
    else if(c == '%'){
        cout<<"Result is "<<(a%b);
    }
    else{
        cout<<"Invalid Input.";
    }
    return 0;
}