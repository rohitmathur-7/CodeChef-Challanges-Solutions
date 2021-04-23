#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define mod 1000000007
using namespace std;

int main(){
    w(t){
        ll n,x;
        cin>>n>>x;
        ll arr[n];
        map<ll,ll> m;
        set<ll> s;
        bool g1=false;
        f(i,0,n){
            cin>>arr[i];
            s.insert(arr[i]);
            m[arr[i]]++;
            if(m[arr[i]]>x){
                g1=true;
            }
        }

        ll sze=s.size();
        if(g1){
            cout<<sze<<endl;
        }
        else{
            vector<ll> v;
            for(auto y:m){
                v.push_back(y.second);
            }
            sort(v.begin(),v.end(),greater<int>());
            ll q=0;
            ll cnt=0;
            for(auto y:v){
                q+=y-1;
                if(q>=x){
                    break;
                }
            }
            if(q>=x){
                cout<<sze<<endl;
            }
            else{
                for(auto y:v){
                    q+=1;
                    cnt++;
                    if(q>=x){
                        break;
                    }
                }
                if(q>=x) cout<<sze-cnt<<endl;
            }  
        }
    }
    return 0;
}