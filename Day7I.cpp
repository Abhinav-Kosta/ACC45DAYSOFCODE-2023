#include<iostream>
using namespace std;

int main(){
    //Let a, b and c be the sectors of a city with population
    //of x,y and z respectively.
    int w,x,y,z;
    cout<<"Enter the population of sector a: ";
    cin>>x;
    cout<<"Enter the population of sector b: ";
    cin>>y;
    cout<<"Enter the population of sector c: ";
    cin>>z;
    w = x + z;
    if (w > y){
        cout<<"Maximum number of people invited are "<<w;
    } else if (y > w){
        cout<<"Maximum number of people invited are "<<y;
    }
    return 0;
}