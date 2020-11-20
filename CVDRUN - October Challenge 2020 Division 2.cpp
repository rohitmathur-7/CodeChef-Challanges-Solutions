//** QUES - CVDRUN October Challenge 2020 Division 2 ** 

#include<iostream>
using namespace std;

string covid(int n,int k,int x,int y){
	 int c=0;
	    while(c<n){
	        if(x==y) return "YES";
	        x=(x+k)%n;
	        c++;
	    }
	    return "NO";
}
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,k,x,y;
	    cin>>n>>k>>x>>y;
	   	string s=covid(n,k,x,y);
	   	cout<<s<<endl;
	}
}
