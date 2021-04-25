#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define scana(arr) for(ll i=0,i<n;i++) cin>>arr[i];
#define mod 1000000007
using namespace std;

int main(){
    w(t){
        ll n,m,x,y,a,b;
        cin>>n>>m>>x>>y>>a>>b;
        ll tsteps=0,psteps=0;
        tsteps+=(m-y);
        tsteps+=(n-x);
        while(a+1<=n && b+1<=m){
                a+=1,b+=1;
                psteps+=1;
        }
        if(a==n && b==m){
            if(psteps<tsteps){
                cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;
        }
        else{
            if(a==n){
                psteps+=(m-b);
            }
            else if(b==m){
                psteps+=(n-a);
            }

            if(psteps<tsteps){
                cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}