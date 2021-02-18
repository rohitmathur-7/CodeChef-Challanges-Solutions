https://www.codechef.com/FEB21C/problems/MAXFUN/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long t;
	cin>>t;
	while(t--){
	    long n;
	    cin>>n;
	    long arr[n];
	    for(long i=0;i<n;i++) cin>>arr[i];
	    sort(arr,arr+n);
        long x=arr[0];
        long y=arr[n-1];
        long d=arr[n/2];
        long ans=abs(x-y)+abs(x-d)+abs(y-d);
        cout<<ans<<endl;
	}
	return 0;
}
