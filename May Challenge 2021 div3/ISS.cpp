//20 points only

#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define scana(arr) for(ll i=0,i<n;i++) cin>>arr[i];
#define vl vector<ll>
#define vpl vector< pair<ll,ll> > 
#define pb push_back
#define mod 1000000007
using namespace std;

ll gcd(ll a,ll b){
    //base case
    if(b==0) return a;
    //rec case
    return gcd(b,a%b);
}

int main(){
    w(t){
        ll k;
        cin>>k;
        vl v;
        ll x;
        ll z=2*k+1;
        f(i,1,z+1){
            x=k+(i*i);
            // cout<<"x: "<<x<<endl;
            v.push_back(x);
        }

        ll ans=0;
        f(i,0,v.size()){
            if(i+1<v.size()) ans+=gcd(v[i],v[i+1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}