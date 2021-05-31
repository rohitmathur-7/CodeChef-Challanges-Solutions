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
#define all(a) a.begin(),a.end()
using namespace std;
                     
int main(){
    w(t){
        ll n,k,f;
        cin>>n>>k>>f;
        vpl v;
        ll mx=LLONG_MIN;

        f(i,0,n){
            ll s,e;
            cin>>s>>e;
            if(e>mx) mx=e;
            v.pb(mp(s,e));
        }
        
        sort(all(v));
        ll tt=0;
        tt+=v[0].first;
        ll mxx=LLONG_MIN;
        
        f(i,0,n){
            if(v[i].first>mxx && (i-1)>=0){
                tt+=(v[i].first-mxx);
            } 
            if(v[i].second>mxx) mxx=v[i].second;
        }

        tt+=(f-mx);
        if(k<=tt) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
     
    return 0;
}