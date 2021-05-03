#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define scana(arr) for(ll i=0,i<n;i++) cin>>arr[i];
#define mod 1000000007
using namespace std;

int main(){
    w(t){
        ll l;
        cin>>l;
        string s;
        cin>>s;
        ll mid=ceil((float)l/2);
        ll y=0;
        bool g=false;
        f(i,0,s.size()){
            ll sze=i+1;
            ll sz=ceil((float)sze/2);
            if(s[i]=='1') y++;
            if(y>=sz){
                g=true;
                break;
            }
        }
        if(g) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
