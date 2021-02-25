#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int points[k];
	    for(int i=0;i<k;i++) cin>>points[i];
	    long long int ans=0;
	    for(int i=0;i<n;i++){
	        string s;
	        cin>>s;
	        ans=0;
	        for(int j=0;j<s.length();j++){
	            if(s[j]=='1'){
	                ans+=points[j];
	            }
	        }
	        cout<<ans<<endl;
	    }
	    
	}
	return 0;
}
