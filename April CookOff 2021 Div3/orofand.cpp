#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define mod 1000000007
using namespace std;

int main(){
    w(t){
        ll n,q;
        cin>>n>>q;
        ll arr[n];
        ll aur=0;
        ll mx=0;
        ll temp;
        ll pos[32]={0};
        ll cnt=0;
        
        f(i,0,n){
            cin>>arr[i];
            aur|=arr[i];
        }
        cout<<aur<<endl;
        
        //calc if there is a 1 at a particular pos for each element
        f(i,0,n){
            f(j,0,32){
                if(arr[i]&(1LL<<j)) pos[j]++;
            }
        }
        
        f(i,0,q){
            ll x,v;
            cin>>x>>v;   

            //subtracting 1 from a particular pos if there exists a 1 on that pos in our given number(arr[x-1])
            f(i,0,32){
                if(arr[x-1]&(1LL<<i)) pos[i]--;
            }

            arr[x-1]=v;
            //adding 1 to a particular pos if there exists a 1 in on that pos in our given number(V).
            f(i,0,32){
                if(v&(1LL<<i)) pos[i]++;
            }
            
            
            //if at a particular pos the number is >=1 then we will add it to our ans.
            ll ans=0;
            f(i,0,32){
                if(pos[i]>0){
                    ans+=(1LL<<i);
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}