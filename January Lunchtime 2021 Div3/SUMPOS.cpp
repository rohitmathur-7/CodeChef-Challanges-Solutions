#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    if(x+y==z) cout<<"YES"<<endl;
	    else if(y+z==x) cout<<"YES"<<endl;
	    else if(z+x==y) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
