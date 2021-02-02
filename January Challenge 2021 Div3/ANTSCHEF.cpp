//30 points

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long t;
	cin>>t;
	while(t--){
	    long n;
	    cin>>n;
	    long nv=0,pv=0;
	    for(long i=0;i<n;i++){
	        int m;
	        cin>>m;
	        long arr[m];
	        for(long j=0;j<m;j++){
	            cin>>arr[j];
	            if(arr[j]<0) nv++;
	            else if(arr[j]>0) pv++;
	        }
	    }
	    cout<<nv*pv<<endl;
	}
	return 0;
}
