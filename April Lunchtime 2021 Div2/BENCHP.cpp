#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define scana(arr) for(ll i=0,i<n;i++) cin>>arr[i];
#define mod 1000000007
using namespace std;

int main(){
    w(t){
        ll n,w,wr;
        cin>>n>>w>>wr;
        ll arr[n];
        map<ll,ll> m;
        f(i,0,n){
            cin>>arr[i];
            m[arr[i]]++;
        }
        if(wr>=w){
            cout<<"YES"<<endl;
        }
        else{
            ll ans=wr;
            bool g=false;
            for(auto x:m){
                if(x.second%2==0){
                    ans+=(x.first*x.second);
                }
                else{
                    ll d=x.second/2;
                    ans+=(d*x.first);
                }
                if(ans>=w){
                    g=true;
                    break;
                }
            }
            if(g) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
    return 0;
}