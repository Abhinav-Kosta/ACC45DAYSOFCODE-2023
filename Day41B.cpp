#include <iostream>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	for(int i = 1; i <= t; i++){
	    cin>>a;
	    cin>>b;
	    if((a*10) > (b*5)){
	        cout<<"FIRST"<<endl;
	    }
	    else if((a*10) < (b*5)){
	        cout<<"SECOND"<<endl;
	    }
	    else if((a*10) == (b*5)){
	        cout<<"ANY"<<endl;
	    }
	}
	return 0;
}