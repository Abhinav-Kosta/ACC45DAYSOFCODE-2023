#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i = 1; i <= t; i++){
	    int x1,x2;
	    cin>>x1;
	    cin>>x2;
	    if(x1 < x2){
	        cout<<"NO"<<endl;
	    }
	    else if(x1 == x2){
	        cout<<"YES"<<endl;
	    }
	    else if(x1 > x2){
	        if((x1-x2) % 2 == 0){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	    else{
	        cout<<"Invalid Input"<<endl;
	    }
	}
	return 0;
}