#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define scana(arr) for(ll i=0,i<n;i++) cin>>arr[i];
#define mod 1000000007
using namespace std;

int main(){
    w(t){   
        ll n,x,k;
        cin>>n>>x>>k;
        ll d1=x-0;
        ll d2=n+1-x;
        if(d1%k==0 || d2%k==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}