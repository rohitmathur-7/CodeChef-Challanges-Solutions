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
                     
int main(){
    w(t){
        ll a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        ll d1=abs(a-c);
        ll d2=abs(b-d);
        ll di=d1+d2;
        if(k==di || ((k-di)>=2 && (k-di)%2==0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
     
    return 0;
}