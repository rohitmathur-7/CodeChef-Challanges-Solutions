**QUES 3 - THREE December Lunchtime 2020 Div2**

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int sze=s.size();
	    map<char,int> m;
	    for(int i=0;i<sze;i++){
	        m[s[i]]++;
	    }
	    int ans=0;
		map<char,int>::iterator it;
		for(it=m.begin();it!=m.end();it++){
			if(it->second>1){
				while(it->second && (sze>2)){
					int a=it->second-2;
					sze=sze-3;
					ans++;
					it->second-=2;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
