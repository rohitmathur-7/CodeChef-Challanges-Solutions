#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define scana(arr) for(ll i=0,i<n;i++) cin>>arr[i];
#define mod 1000000007
using namespace std;

ll fastModExp(ll a,ll b){

    ll res = 1;
    while(b>0){
        if(b&1){
            res = (res*a)%mod;
        }
        a = (a*a)%mod;
        b = b>>1;
    }
    return res;
}

int main(){
    w(t){
        ll n;
        cin>>n;
        n--;
        cout<<fastModExp(2,n)<<endl;;
    }
    return 0;
}