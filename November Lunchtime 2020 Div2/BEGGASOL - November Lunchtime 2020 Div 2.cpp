**BEGGASOL - NOVEMBER LUNCHTIME 2020 DIV 2**
YET TO BE UPLOADED OB GITHUB.

EXPLANATION-

SOLUTION-

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n+1];
	    for(int i=1;i<=n;i++) cin>>arr[i];
	    int res=arr[1];
	    int fuel=arr[1];
	    for(int i=2;i<=n;i++){
	    	fuel-=1;
	    	if(fuel<0) break;
	    	if(fuel>=0){
	    		res+=arr[i];
			}
			fuel+=arr[i];
		}
		cout<<res<<endl;
	}
	return 0;
}

