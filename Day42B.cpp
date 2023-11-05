#include <iostream>
using namespace std;

int main() {
    int t,i,n,x,d,r;
    cin>>t;
    cout<<endl;
    for(i = 1; i <= t; i++){
        cin>>n;
        cin>>x;
        cin>>d;
        r = n/(5*x);
        cout<<(r+d);
        cout<<endl;
    }
	return 0;
}
