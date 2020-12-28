**QUES 3 - VACCINE2 December Challange 2020 Div2 **

#include <bits/stdc++.h>
using namespace std;

int main(){
	long t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
		int arr[n+1];
		int atRisk=0;
		int noRisk;
		int ans=0;
		for(int i=1;i<=n;i++){
			cin>>arr[i];
			if((arr[i]>=80) || (arr[i]<=9)) atRisk++;
		}
		noRisk=n-atRisk;
		float b=(float)atRisk/d;
		int a=ceil(b);
		ans+=a;
		float q=(float)noRisk/d;
		int w=ceil(q);
		ans+=w;
		cout<<ans<<endl;
	}
}
