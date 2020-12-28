**QUES 4 - POSPREFS December Challange 2020 Div2 **

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n+1];
		if(n==k){
			for(int i=1;i<=n;i++){
				arr[i]=i;
			}
			for(int i=1;i<=n;i++){
				cout<<arr[i]<<" ";
			}
		}
		else{
			int cnt=0;
			int max_k;
			if(k>=1 && k<=6){
				for(int i=1;i<=n;i++){
					if(i==1){
						arr[i]=i;
						cnt++;
					}
					else if(i==2 && k>=2){
						arr[i]=i;
						cnt++;
					}
					else if(cnt<k && i%2==0){
						arr[i]=i;
						cnt++;
					}
					else{
						arr[i]=-i;	
					}
				}
				if(cnt<k){
					for(int i=n;i>=1;i--){
						if((i%2)!=0 && cnt<k){
							arr[i]=i;
							cnt++;
						}
					}
				}
				for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
			}
			else{
				int cnt=0;
					for(int i=1;i<=n;i++){
						if(i==1){
							arr[i]=i;
							cnt++;
						}
						else if(i==2 && k>=2){
							arr[i]=i;
							cnt++;
						}
						else if(cnt<k && i%2==0){
							arr[i]=i;
							cnt++;
						}
						else{
							arr[i]=-i;	
						}
					}
					for(int i=n;i>=1;i--){
						if((i%2)!=0 && cnt<k){
							arr[i]=i;
							cnt++;
						}
					}
					for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
			}	
		}
		cout<<endl;
	}
}
