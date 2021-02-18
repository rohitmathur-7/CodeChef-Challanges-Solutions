https://www.codechef.com/FEB21C/problems/HDIVISR/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int max=1;
	for(int i=1;i<=10;i++){
	    if(n%i==0) max=i;
	}
	cout<<max<<endl;
	return 0;
}
