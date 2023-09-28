#include<iostream>
using namespace std;

int main(){
     int r,o;
     cout<<"Enter the runs required for Chef's team to win: ";
     cin>>r;
     cout<<"Enter the over remaining: ";
     cin>>o;
     if(r <= (o*36)){
          cout<<"Chef's team can win the match.";
     }
     else if (r > (o*36)){
          cout<<"Chef's team can not win the match.";
     }
     else {
          cout<<"Invalid Input";
     }
     return 0;
};