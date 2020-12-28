#include<iostream>
using namespace std;
int main(){
	int count=0;
	for(int i=5;i>=1;i--){
		for(int j=i-1;j>=1;j--){
			cout<<"*";
		}
		char a='Z';
		for(int k=count;k>=0;k--){
			cout<<char(a-k);
		}
		count++;
		cout<<endl;
	}
}

