#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define scana(arr) for(ll i=0,i<n;i++) cin>>arr[i];
#define mod 1000000007
using namespace std;

int main(){
    w(t){
        ll x,a,b;
        cin>>x>>a>>b;
        ll ans = (a+(100-x)*b)*10;
        cout<<ans<<endl;
    }
    return 0;
}