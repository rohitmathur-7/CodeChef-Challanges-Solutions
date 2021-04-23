#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define mod 1000000007
using namespace std;

int main(){
    w(t){
        ll amn,bmn,cmn,tmn,a,b,c;
        cin>>amn>>bmn>>cmn>>tmn>>a>>b>>c;
        if(a>=amn && b>=bmn && c>=cmn && ((a+b+c)>=tmn)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}