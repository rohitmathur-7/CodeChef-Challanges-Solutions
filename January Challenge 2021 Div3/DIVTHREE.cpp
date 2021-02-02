#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    long k,d;
	    cin>>n>>k>>d;
	    long arr[n];
	    long sum=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    int q=sum/k;
	    if(q>d) cout<<d<<endl;
	    else{
	        cout<<q<<endl;
	    }
	    
	}
	return 0;
}
