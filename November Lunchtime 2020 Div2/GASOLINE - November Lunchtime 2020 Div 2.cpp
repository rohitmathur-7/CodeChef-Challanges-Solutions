**GASOLINE - NOVEMBER LUNCHTIME 2020 DIV 2**
YET TO BE UPLOADED OB GITHUB.

EXPLANATION-

SOLUTION-

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int ltrs[n+1];
	    int coins[n+1];
	    vector<pair<int,int>> p;
	    for(int i=1;i<=n;i++) cin>>ltrs[i]; 
	    for(int i=1;i<=n;i++){
	        cin>>coins[i];
	        p.push_back({coins[i],ltrs[i]});
	    }
	    sort(p.begin(),p.end());
	    int sum=0;
	    long long ans=0;
	    for(auto c:p){
	        if((sum+c.second)<=n){
	            sum+=c.second;
	            ans+=(c.first*(long long)c.second);
	       }else{
	           ans+=(n-sum)*(long long)c.first;
	           break;
	       }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

