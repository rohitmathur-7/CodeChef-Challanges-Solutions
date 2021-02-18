https://www.codechef.com/FEB21C/problems/FROGS/

//50 POINTS
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int weight[n],l[n];
	    for(int i=0;i<n;i++){
	        cin>>weight[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>l[i];
	    }
	    if((weight[0]) < (weight[1])){
	        cout<<"0"<<endl;
	    }
	    else{
	        if(l[0]>1){
	            cout<<"1"<<endl;
	        }
	        else{
	            cout<<"2"<<endl;
	        }
	    }
	}
	return 0;
}
