#include<iostream>
using namespace std;

int main(){
   int n,a;
   int p = 0;
   int counter = 0;
   cout<<"Enter the length of array: ";
   cin>>n;
   int array[n];
   for(int i = 0; i < n; i++){
       cout<<"Enter "<<i<<" element of array:";
       cin>>a;
       array[i] = a;
   }
   for(int i = 0; i < n; i++){
       if (array[p] == array[i]){
          counter = counter + 1;
       }
       cout<<array[p]<<" has occured "<<counter<<" times.";
       counter = 0;
       p = p + 1;
   }
   return 0;
   //Can't get correct logic for this.
};