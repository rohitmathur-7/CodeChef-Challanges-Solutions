//**QUES - DECRM (OCOTBER COOKOFF 2020 DIV2)**
#include <bits/stdc++.h>
using namespace std;

long ans(long l,long r){
    int a=r-l;
    int b=r%l;
    if(a==b) return r;
    return -1;
}

int main(){
	long t;
	cin>>t;
	for(long i=0;i<t;i++){
	    long l,r;
	    cin>>l>>r;
	    cout<<ans(l,r)<<endl;
	}
	return 0;
}

