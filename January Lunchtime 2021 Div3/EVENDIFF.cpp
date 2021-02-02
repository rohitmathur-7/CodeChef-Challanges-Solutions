#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
//	    int cnt=0;
	    int odd=0,even=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]%2==0) even++;
	        else odd++;
	    }
	    if(even>odd || even==odd){
	        cout<<odd<<endl;
	    }
	    else{
	        cout<<even<<endl;
	    }
	}
	return 0;
}
