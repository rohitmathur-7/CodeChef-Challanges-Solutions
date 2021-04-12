#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
#define w(t) int t;cin>>t;while(t--)
#define ll long long int
#define mod 1000000007
using namespace std;

int main(){
    w(t){
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll cnt=0;
        ll ans=INT_MIN;
        bool g=false;
        for(ll i=0;i<n;i++){
            if(s[i]=='*'){
                cnt++;
                if(s[i+1]!='*'){
                    ans=max(cnt,ans);
                    cnt=0;
                    if(ans>=k){
                        g=true;
                        break;
                    }
                }
            }
        }
        if(g) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}