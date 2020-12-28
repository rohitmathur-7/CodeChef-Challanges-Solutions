**QUES 1 - ATTENDU December CookOff 2020 Div2 **

#include <bits/stdc++.h>
using namespace std;

string ans(){
     int n;
	 cin>>n;
	    string s;
	    cin>>s;
	    int num=0;
	    for(int i=0;i<s.size();i++){
	        if(s[i]=='1') num++;
	    }
	    float a;
	    a=(float)(num*100)/120;
	    if(a>=75) return "YES";
	    int diff=120-n;
	    float c;
	    c=(float)(diff*100)/120;
	    if((a+c)>=75) return "YES";
	    else return "NO";
}

int main(){
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   cout<<ans()<<endl;
	}
	return 0;
}

