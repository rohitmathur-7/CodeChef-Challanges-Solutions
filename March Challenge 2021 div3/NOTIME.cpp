#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,h,x;
	cin>>n>>h>>x;
	int arr[n];
	bool g=false;
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    if((arr[i]+x) >=h) g=true;
	}
	if(g) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
	return 0;
}
