#include <iostream>
using namespace std;

//If you observe carefully in the question , then we can see that whenever the last char of the string is present somewhere in the string before too , then we can say YES else NO.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    char ans=s[s.size()-1];
	    bool a=false;
	    for(int i=0;i<s.size()-1;i++){
            if(s[i]==ans){
                a=true;
                break;
            }
	    }
	    if(a) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}

