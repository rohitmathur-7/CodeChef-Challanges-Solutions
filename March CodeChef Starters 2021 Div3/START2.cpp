#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int r,o,c;
	cin>>r>>o>>c;
	int d=20-o;
	int run=d*6;
	run*=6;
	if((run+c)>r) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
