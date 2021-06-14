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

        ll D,d,p,q;
        cin>>D>>d>>p>>q;
        ll n=ceil((float)D/d);
        ll r=D%d;
        ll a1=p*d;
        ll a2=d*(p+q);
        ll an,ann,ans,dif;
        if(n>=2) dif=a2-a1;
        else dif=d;
        if(r==0){
            an=a1+(n-1)*dif;
            ans=n*(a1+an);
            ans/=2;
            cout<<ans<<endl;
        }
        else{
            an=a1+(n-2)*dif;
            ans=(n-1)*(a1+an);
            ans/=2;
            ann=r*(p+(q*(n-1)));
            ans+=ann;
            cout<<ans<<endl;
        }

    }
     
    return 0;
}