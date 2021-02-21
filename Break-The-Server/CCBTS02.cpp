// https://www.codechef.com/CCHI2021/problems/CCBTS02/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    bool notRunning=true;
	    bool g=false;
	    while(n--){
	        string s;
	        cin>>s;
	        if(s=="start") notRunning=false;
	        else if(s=="restart") notRunning=false;
	        else{
	            if(notRunning) g=true;
	            notRunning=true;
	        }
	    }
	    if(g) cout<<"404"<<endl;
	    else cout<<"200"<<endl;
	}
	return 0;
}
