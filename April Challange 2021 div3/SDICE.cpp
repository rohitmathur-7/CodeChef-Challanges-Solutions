#include<bits/stdc++.h>
#define ll long long int
#define f(i,a,b) for(ll i=a;i<b;i++)
#define w(t) ll t;cin>>t;while(t--)
#define mod 1000000007
using namespace std;

int main(){
    w(t){
        ll n;
        cin>>n;
        if(n==1) cout<<20<<endl;
        else if(n==2) cout<<36<<endl;
        else if(n==3) cout<<51<<endl;
        else if(n==4) cout<<60<<endl;
        else{
            ll d;
            ll ans;
            d=n/4;
            if(n%4==0){
                ans = (44*(d-2))+104;
                cout<<ans<<endl;
            }
            else if(n%4==1){
                ans = (44*(d-1))+76;
                cout<<ans<<endl;
            }
            else if(n%4==2){
                ans = (44*(d-1))+88;
                cout<<ans<<endl;
            }
            else{
                ans = (44*(d-1))+99;
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}