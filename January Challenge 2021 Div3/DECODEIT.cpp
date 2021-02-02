#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	char arr[16];
	for(int i=0;i<16;i++){
		arr[i]='a'+i;
	}
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int size=16;
		int c=0;
		int x=3;
		for(int i=0;i<n;i++){
			if(i%4==0){
				size=16;
				for(int i=0;i<16;i++){
					arr[i]='a'+i;
				}
				c=0;
			}
			if(s[i]=='0'){
				size=size/2;
				if(c==3){
					cout<<arr[0];
					c=0;
				}
			}
			else{
				int cnt=0;
				int d=size/2;
				for(int j=d;j<size;j++){
					arr[cnt]=arr[j];
					cnt++;
				}
				size=size/2;
				if(c==x){
					cout<<arr[1];
					c=0;
				}
			}
			c++;
		}
		cout<<endl;
	}
	return 0;
}