#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll c;
		cin>>c;
	    ll a=(1<<(64-__builtin_clzll(c)-1))-1;
	    // cout<<a<<" ";
	    ll b=((1<<(64-__builtin_clzll(c)-1)+1));
	    // cout<<b<<" ";
	    ll d=b-(c-a);
	    // cout<<d<<endl;
	    cout<<a*d<<endl;
	}
}