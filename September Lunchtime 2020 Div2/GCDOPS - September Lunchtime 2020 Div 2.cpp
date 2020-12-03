//** QUES - GCDOPS September Lunchtime 2020 Division 2 ** 

#include <iostream>
using namespace std;

string game(int n){
	    int arr[n];
	    bool g=false;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        int d=i+1;
	        if(d%arr[i]!=0) g=true;
	    }
	    if(g) return "NO";
	    else return "YES";
	}

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    string s=game(n);
	    cout<<s<<endl;
	}
	return 0;
}

