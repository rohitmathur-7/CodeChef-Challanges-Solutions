#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int w1,w2,x1,x2,m;
	    cin>>w1>>w2>>x1>>x2>>m;
	    int diff=w2-w1;
	    if((diff>=(m*x1)) && (diff<=(m*x2))) cout<<1<<endl;
	    else cout<<0<<endl;
	}
	return 0;
}
