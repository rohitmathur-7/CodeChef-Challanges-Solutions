//NOVEMBER CHALLANGE 2020 DIV 2

//QUES1 - ADADISH

#include <bits/stdc++.h>
using namespace std;

int ans(int n){
		int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    if(n==1) return arr[0];
	    if(n==2){
	    	if(arr[0]>arr[1]) return arr[0];
	    	return arr[1];
		}
		sort(arr,arr+n,greater<int>());
		int a=arr[0];
		int b=arr[1];
		int c=2;
		while(c<n){
			if(b<a) b+=arr[c];
			else a+=arr[c];
			c++;
		}
		int m=max(a,b);
		return m;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    cout<<ans(n)<<endl;
	}
	return 0;
}

