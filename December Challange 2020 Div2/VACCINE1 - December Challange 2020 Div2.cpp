**QUES 1 - VACCINE1 December Challange 2020 Div2 **

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int d1,d2,v1,v2,p;
	cin>>d1>>v1>>d2>>v2>>p;
	int m=min(d1,d2);
	int sum=0;
	int ans;
	int q=m-1;
	int diff=abs(d1-d2);
	int v=v1+v2;
	int cnt=0;
	while(sum<p){
	    if(m==d1 && cnt<diff){
	        sum+=v1;
	    }
	    else if(m==d2 && cnt<diff){
	        sum+=v2;
	    }
		else{
		    sum+=v;
		   
		}
		 cnt++;
	}
	ans=q+cnt;
	cout<<ans;
	return 0;
}

