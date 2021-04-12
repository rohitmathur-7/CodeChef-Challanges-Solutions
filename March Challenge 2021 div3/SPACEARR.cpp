#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n+1];
		ll sum=0,tsum=0;
		for(ll i=1;i<=n;i++){
			cin>>arr[i];
			sum+=arr[i];
			tsum+=i;
		}
		sort(arr+1,arr+n+1);
		// for(ll i=1;i<=n;i++) cout<<arr[i]<<" ";
		// cout<<endl;
		ll p_greater=0,a_greater=0,equal=0,diff=0;
		for(ll i=1;i<=n;i++){
		  //  cout<<arr[i]<<"  "<<i<<endl;
			if(arr[i] < i){
				p_greater++;
				diff=diff+i-arr[i];
			}
			else if(arr[i]>i) a_greater++;
			else equal++;
		}
// 		cout<<"Diff: "<<diff<<endl;
		if(sum>tsum){
			cout<<"Second"<<endl;
		}
		else if(a_greater>0){
			cout<<"Second"<<endl;
		}
		else{
			if((diff%2)!=0) cout<<"First"<<endl;
			else cout<<"Second"<<endl;
		}
	}
}