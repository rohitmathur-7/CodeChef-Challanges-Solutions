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
                     
int main(){
    w(t){
        ll x,m,d;
        cin>>x>>m>>d;
        ll q=m*x;
        cout<<min(q,d+x)<<endl;
    }
     
    return 0;
}