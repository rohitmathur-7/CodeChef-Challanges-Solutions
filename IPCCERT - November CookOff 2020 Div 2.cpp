**QUESTION 1 - CHEF AND IPC CERTIFICATES(IPCCERT) - November CookOff 2020 Div2**
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	long m;
	cin>>n>>m>>k;
	long cnt=0;
	for(int i=0;i<n;i++){
	    int sum=0;
	    int arr[k];
	    for(int j=0;j<k;j++){
	        cin>>arr[j];
	        sum+=arr[j];
	    }
	    long q;
	    cin>>q;
	    if(sum>=m && q<=10) cnt++;
	}
    cout<<cnt;
	return 0;
}

