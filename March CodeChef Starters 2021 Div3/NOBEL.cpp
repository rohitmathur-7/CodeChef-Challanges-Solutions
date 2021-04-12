#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int arr[n];
	    bool visited[m+1];
	    memset(visited,false,sizeof(visited));
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        visited[arr[i]]=true;
	    }
	    bool g=false;
	    for(int i=1;i<=m;i++){
	        if(!visited[i]){
	            g=true;break;
	        }
	    }
	    if(g) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
