#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define scana(arr) for(ll i=0,i<n;i++) cin>>arr[i];
#define vl vector<ll>
#define vpl vector< pair<ll,ll> >
#define pb push_back
#define mp make_pair
#define mod 1000000007
using namespace std;

ll fast_modulo_exponentation(ll a,ll b){
    ll ans=1;
    while(b){
        if(b&1){
            ans=(ans*a)%mod;
        }
        a=(a*a)%mod;
        b>>=1;
    }
    return ans%mod;
}

int main(){

    w(t){
        ll n,m;
        cin>>n>>m;
        ll num = fast_modulo_exponentation(2,n) - 1;
        ll ans = fast_modulo_exponentation(num,m);
        cout<<ans<<endl;
    }
        
    return 0;
}
