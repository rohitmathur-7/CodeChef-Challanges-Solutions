**QUES1 - SEDARR December Lunchtime 2020 Div2**

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n+1];
	    int sum=0;
	    for(int i=1;i<=n;i++){
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    if(sum%k==0) cout<<"0"<<endl;
	    else{
	       cout<<"1"<<endl;
	    }
	    
	}
	return 0;
}

