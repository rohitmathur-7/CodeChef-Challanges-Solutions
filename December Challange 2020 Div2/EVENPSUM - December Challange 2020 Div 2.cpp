**QUES 2 - EVENPSUM December Challange 2020 Div2 **

#include <bits/stdc++.h>
using namespace std;

long answer(){
    long a,b;
	cin>>a>>b;
	long ans;
	int mod1=a%2;
	int mod2=b%2;
	if((mod1==0) && (mod2==0)){
		long aa=a/2;
		long bb=b/2;
	    long q=aa*bb;
	    ans=2*q;
	    return ans;
	}
	else if(((mod1==0) && (mod2!=0)) || ((mod2==0) && (mod1!=0))){
	    if(a%2==0){
	    	long aa=a/2;
			long bb=(b+1)/2;
			long bbb=b/2;
	        long q=(aa)*(bb);
	        long r=(aa)*(bbb);
	        ans=q+r;
	        return ans;
	    }
	    else{
	    	long aa=(a+1)/2;
	    	long aaa=a/2;
			long bb=b/2;
	    	long q=(aa)*(bb);
	        long r=(aaa)*(bb);
	        ans=q+r;
	        return ans;
		}
	}
	else{
		long aa=(a+1)/2;
		long bb=(b+1)/2;
		long aaa=a/2;
		long bbb=b/2;
	    long q=(aa)*(bb);
	    long r=(aaa)*(bbb);
	    ans=q+r;
	    return ans;
	}
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    cout<<answer()<<endl;
	}
	return 0;
}

