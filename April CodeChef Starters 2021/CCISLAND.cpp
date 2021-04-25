#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define scana(arr) for(ll i=0,i<n;i++) cin>>arr[i];
#define mod 1000000007
using namespace std;

int main(){
    w(t){
        ll x,y,xr,yr,d;
        cin>>x>>y>>xr>>yr>>d;
        ll d1=x/xr;
        ll d2=y/yr;
        if(min(d1,d2)>=d) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}