**QUES2 - SWAP10HG December Lunchtime 2020 Div2**

#include <bits/stdc++.h>
using namespace std;

string ans(){
	int n;
	cin>>n;
	string a,b;
	cin>>a>>b;
	int zeros;
	bool g=false;
	bool visited[n];
	memset(visited,false,sizeof(visited));
	for(int i=0;i<n;i++){
		if(a[i]==b[i]){
			visited[i]=true;
			continue;
		}
		else{
			if(b[i]=='0'){
					for(int j=i+1;j<n;j++){
						if(a[j]=='0'){
							visited[i]=true;
							int swap=a[i];
							a[i]=a[j];
							a[j]=swap;
							zeros--;
							break;
						}
					}	
			}
		}	
	}
	for(int i=0;i<n;i++){
		if(visited[i]!=true) return "NO";
	}
	return "YES";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cout<<ans()<<endl;
	}
}

