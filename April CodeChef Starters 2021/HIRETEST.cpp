#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define scana(arr) for(ll i=0,i<n;i++) cin>>arr[i];
#define mod 1000000007
using namespace std;

int main(){
    w(t){
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        char arr[n][m];
        f(i,0,n){
            ll f=0,p=0;
            f(j,0,m){
                cin>>arr[i][j];
                if(arr[i][j]=='F') f++;
                if(arr[i][j]=='P') p++;
            }
            if(f>=x) cout<<1;
            else if(f==x-1 && p>=y) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
    return 0;
}