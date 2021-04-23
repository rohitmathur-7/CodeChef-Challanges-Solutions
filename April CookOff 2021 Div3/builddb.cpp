#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define mod 1000000007
using namespace std;

int main(){
    w(t){
        ll n,r;
        cin>>n>>r;
        ll a[n],b[n];
        f(i,0,n){
            cin>>a[i];
        }
        f(i,0,n){
            cin>>b[i];
        }
        ll ans=0;
        ll tension=0;
        ll zero=0;
        f(i,0,n){
            if(i>0){
                ll diff=a[i]-a[i-1];
                ll d=diff*r;
                ans-=max(zero,d);
            }
            ans=max(zero,ans);
            ans+=b[i];
            tension=max(tension,ans);
        }
        cout<<tension<<endl;
    }
    return 0;
}