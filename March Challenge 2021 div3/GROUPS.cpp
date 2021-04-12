#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    bool one=false,zero=false;
        int count=0;
	    int ans=0;
	    for(int i=0;i<s.size();i++){
	        if(s[i]=='1'){
                if(s.size()==1){
                    ans++;
                    continue;
                }
                if(i==0 && s[i+1]!='1' && (i+1)<s.size()) ans++;
                if(i==s.size()-1 && s[i-1]!='1' && (i-1)>=0) ans++;
                if(s[i+1]=='0' && s[i-1]=='0' && (i+1)<s.size() && (i-1)>=0) ans++;
                one=true;zero=false;
                count++;
                if(count==2){
                    ans++;
                }
            }
            else{
                count=0;
                one=false,zero=true;
                continue;
            }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
