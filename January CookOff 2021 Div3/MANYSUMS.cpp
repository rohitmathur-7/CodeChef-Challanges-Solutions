#include <bits/stdc++.h>
    using namespace std;
    
    int main() {
    	// your code goes here
    	int t;
    	cin>>t;
    	while(t--){
    	    int l,r;
    	    cin>>l>>r;
    	    int ans=0;
    	    if(l==r){
    	        cout<<"1"<<endl;
    	    }
    	    else{
    	    	ans+=(r-l+1);
    	    	ans+=(r-l+1)-1;
    	    	cout<<ans<<endl;
    	    }
    	}
    	return 0;
    }
