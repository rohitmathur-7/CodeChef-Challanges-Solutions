#include <bits/stdc++.h>
using namespace std;
#define int long long int
vector<int> prime;

void primeSieve(vector<int> p){
    
    for (int i = 2; i < 1000000; i++) {
    		if (p[i]) {
    			prime.push_back(i);
    			for (int j = i * i; j <= 1000000; j = j + i) {
    				p[j] = 0;
    			}
    		}
    	}
}


int32_t main() {
	// your code goes here
	int t;
	cin>>t;
	vector<int> p(1000000,1);
	primeSieve(p);
	while(t--){
	    int n;
	    cin>>n;
	   // To find the total count of all the number starting from 1 to n
	   // which are co-primes with n is calculated using 
	   //Euler’s totient function.
	   //E(n) = n*(1-1/p) for all prime factors p of n.
	   int total=n;
	   for(int i=0; (i<prime.size() and prime[i]<=n) ; i++){
	       if(n%prime[i]==0){
	           total=total/prime[i];
	           total*=(prime[i]-1);
	       }
	   }
	   cout<<total<<endl;
	}
	return 0;
}
