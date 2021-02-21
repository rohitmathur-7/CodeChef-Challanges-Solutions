// https://www.codechef.com/CCHI2021/problems/CCBTS01/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int c1=0,c2=0,c3=0;
	    for(int i=0;i<s.size();i++){
	        if(s[i]=='P') c1++;
	        else if(s[i]=='C') c2++;
	        else c3++;
	    }
	    if(c1==1 && c2==1 && c3==1) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
