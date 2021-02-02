#include <bits/stdc++.h>
using namespace std;

int sol(){
        int n,m;
		cin>>n>>m;
		long a1[n],a2[m];
		long sum1=0,sum2=0;
		for(int i=0;i<n;i++){
			cin>>a1[i];
			sum1+=a1[i];
		}
		for(int i=0;i<m;i++){
			cin>>a2[i];
			sum2+=a2[i];
		}
		int ans=0;
		sort(a1,a1+n);
		sort(a2,a2+m,greater<long>());
		int qq=min(n,m);
		if(sum1>sum2) return 0;
		else{
			for(int i=0;i<qq;i++){
				sum1=sum1+a2[i]-a1[i];
				sum2=sum2+a1[i]-a2[i];
				ans++;
				if(sum1>sum2) return ans;
			}
			return -1;
		}
		
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cout<<sol()<<endl;
	}
}

	