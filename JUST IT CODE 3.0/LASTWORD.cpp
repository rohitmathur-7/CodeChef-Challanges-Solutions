#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string str;
	getline(cin,str);
	int sz=str.length();
	int pos=0;
	for(int i=0;i<=sz;i++){
	    if(str[i]==' ') pos=i+1;
	}
	int d=sz-pos;
	cout<<d<<endl;
	return 0;
}
