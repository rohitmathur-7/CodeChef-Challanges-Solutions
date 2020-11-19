#include <bits/stdc++.h>
using namespace std;


void SOE(bool (&prime)[1299720],long n,long (&pr)[1299720]) 
{ 
    memset(prime, true, sizeof(prime)); 
    for (long p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (long i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    long cc=1;
  	for(long i=2;i<=1299720;i++){
		if(prime[i]==true){
			pr[cc]=i;
			cc++;
		}
	}
} 

void ans(long *p){
	long n;
	cin>>n;
	long b[n+1];
	long a[n+1];
	for(long i=1;i<=n;i++){
		cin>>b[i];
		if(b[i]==i) a[i]=p[i];
		else{
			a[i]=p[b[i]];
		}
	}
	for(long i=1;i<=n;i++) cout<<a[i]<<" ";
}

int main(){
	long t;
	cin>>t;
	bool p[1299720];
	long pr[1299720];
	//prime(p);
	SOE(p,1299720,pr);
	while(t--){
		ans(pr);
		cout<<endl;
	}
}


