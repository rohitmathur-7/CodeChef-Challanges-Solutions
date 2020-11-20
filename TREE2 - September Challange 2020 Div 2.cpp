//** QUES - TREE2 September Challange 2020 Division 2 ** 

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		set<int> s; int largest,chk;
		for(int i=0;i<n;i++){
			cin>>chk;		
			if(chk!=0) s.insert(chk);
		}	
		cout << s.size()<<endl;
	}
}
