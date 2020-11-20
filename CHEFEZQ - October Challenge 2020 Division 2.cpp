//** QUES - CHEFEZQ October Challenge 2020 Division 2 ** 


#include<bits/stdc++.h>
using namespace std;

long ans(int n,int k){
		long arr[n],sum=0;
		for(long i=0;i<n;i++){
			cin>>arr[i];
			sum+=arr[i];
		}
		long a,b;
		if(n!=1){
			for(long i=0;i<n;i++){	
			    if(arr[i]<k){
					return i+1;
				} 
				if(arr[i]>=k){
					b=arr[i]-k;
					arr[i+1]=arr[i+1]+b;
				}
			}
		}
			a=(sum/k)+1;
			return a;
	}



int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		long n,k;
		cin>>n>>k;
		long an=ans(n,k);
		cout<<an<<endl;
	}
}
