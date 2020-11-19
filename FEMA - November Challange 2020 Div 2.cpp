//NOVEMBER CHALLANGE 2020 DIV 2
//QUES 3 -IRON, MAGNET AND WALL(FEMA)


#include <bits/stdc++.h>
using namespace std;

void ans(int n,int k){
	string s;
	cin>>s;
	int i=0,j=0,ss=0,ans=0,p=0;
	while(i<n && j<n){
		if(s[i]=='M'){
			if(s[j]=='I'){
				if(i>j){
					for(int q=j;q<i;q++){
						if(s[q]==':') ss++;
					}
				}
				else{
					for(int q=i;q<j;q++){
						if(s[q]==':') ss++;
					}
				}
				p=k+1-abs(i-j)-ss;
				ss=0;
				if(p>0){
					ans++;
					i++;
					j++;
				//	ss=0;
				// 	p=0;
				}
				else{
				    if(i>j) j++;
				    else i++;
				// 	p=0;
				}
			}
			else if(s[j]=='X'){
				i=j;
				j++;
				i++;
				ss=0;
			}
			else j++;
		}
		else if(s[i]=='X'){
			j=i;
			i++;
			j++;
			ss=0;
		}
		else i++;
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,c;
		cin>>n>>c;
		ans(n,c);
	}
}
