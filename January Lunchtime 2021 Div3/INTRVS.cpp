#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		
		int solved=0;
		bool minus=false;
		bool isSlow=false;
		bool isBot=true;
		for(int i=0;i<n;i++){
			if(arr[i]==-1){
				minus=true;
				isBot=false;
			}
			if(arr[i] > -1) solved++;
			if(arr[i] > k) isSlow=true;
			if(arr[i] > 1) isBot=false;
		}
		
		bool rejected=false;
		int cl=ceil((float)n/2);
//		cout<<"cl: "<<cl<<endl;
		if(solved < cl){
			rejected=true;
			cout<<"Rejected"<<endl;
		}

		
		if(!rejected){
			if(isSlow) cout<<"Too Slow"<<endl;
			if(!isSlow && isBot && !minus) cout<<"Bot"<<endl;
			if(!isSlow && !isBot) cout<<"Accepted"<<endl;	
		}
		
	}
}



