#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int h,x,y,c;
        cin>>h>>x>>y>>c;
        int ans=x;
        ans+=floor(y/2);
        if((ans*h)<=c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}