//** QUES - POSAND October Challenge 2020 Division 2 ** 

#include<bits/stdc++.h>
using namespace std;

vector<int> p(int n){
	int arr[n],count=0,d;
	vector<int> v;
	vector<int> v1;
	vector<int> v2;
	v1.push_back(1);
	v2.push_back(-1);
	bool g=false;
	v.push_back(2);
	v.push_back(3);
	v.push_back(1);
	for(int i=1;i<=n;i++){
		arr[i]=i;
	}
	if(n==1) return v1;
	else if(ceil(log2(n))==floor(log2(n))) return v2;
	else if(n==3) return v;
	else{
		for(int i=4;i<=n;i++){
			if(ceil(log2(i))==floor(log2(i))){
				d=i;
				g=true; 
				continue;
			}
			v.push_back(i);
			if(g==true) v.push_back(d);
			g=false;
		}
		return v;
	}
}


int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,count=0;
		cin>>n;
		vector<int> s=p(n);
		for(int i=0;i<s.size();i++) cout<<s[i]<<" ";
		cout<<endl;
	}
}







