#include <bits/stdc++.h>
using namespace std;

int main(){
	// your code goes here
	int t;
	cin>>t;
	vector<char> vs;vector<char> vl;vector<char> vn;
	for(int i=0;i<26;i++){
		char ch='a'+i;
		vs.push_back(ch);
	}
	for(int i=0;i<26;i++){
		char ch='A'+i;
		vl.push_back(ch);
	}
	for(int i=0;i<10;i++){
		char ch='0'+i;
		vn.push_back(ch);
	}
	vector<char>::iterator its,itl,itn;
	while(t--){
	    string s;
	    cin>>s;
	    int n=s.size();
	    bool c1=false,c2=false,c3=false,c4=false;

	    if(s.size()>=10){
	        for(int i=0;i<s.size();i++){
	        	if(c1==false){
	            	its=find(vs.begin(),vs.end(),s[i]);
	            	if(its!=vs.end()) c1=true;
				}
	            if(c2==false){
	            	itl=find(vl.begin(),vl.end(),s[i]);
	            	if(itl!=vl.end()){
	            		if(i>0 && i<n-1) c2=true;
					}
				}
				if(c3==false){
					itn=find(vn.begin(),vn.end(),s[i]);
	            	if(itn!=vn.end()){
	            		if(i>0 && i<n-1) c3=true;
					}
				}
				if(c4==false){
					if(s[i]== '@' || s[i]=='#' || s[i]=='%' || s[i]=='&' || s[i]=='?'){
						if(i>0 && i<n-1) c4=true;
					}
				}
	        }
	        if(c1 && c2 && c3 && c4) cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	    }
	    else cout<<"NO"<<endl;
	}
	return 0;
}
