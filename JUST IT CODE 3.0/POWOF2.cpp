#include <bits/stdc++.h>
using namespace std;

int power(int x){
    int cnt=0;
    while(x){
        int p=log2(x);
        if((p&(p-1))==0){
        	cnt++;
        	x=log2(x);
        	if(x==0) return cnt-1;
		}
        else return cnt;
    }
}


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long x;
	    cin>>x;
	    if((x&(x-1))==0 && x!=1){
	        cout<<power(x)<<endl;
	    }
	    else cout<<"0"<<endl;
	}
	return 0;
}
