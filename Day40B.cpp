#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i = 1; i <= t; i++){
	    int x,y,d;
	    cin>>x;
	    cin>>y;
	    cin>>d;
	    if(x > y){
	        if(d >= (x-y)){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	    else if(y > x){
	        if(d >= (y-x)){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	    else if(x == y){
	        if(d >= (x-y)){
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