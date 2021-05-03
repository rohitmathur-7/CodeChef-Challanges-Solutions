#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define scana(arr) for(ll i=0,i<n;i++) cin>>arr[i];
#define mod 1000000007
using namespace std;

int main(){


    ll n,q;
    cin>>n;
    ll arr[n];
    ll sum=0;
    f(i,0,n){
        cin>>arr[i];
        sum=(sum+arr[i]+mod)%mod;
    }

    cin>>q;
    ll query[q];
    f(i,0,q){
        cin>>query[i];
    }
    f(i,0,q){
        sum=(sum+sum+mod)%mod;
        cout<<sum<<endl;
    }

    return 0;
}