#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define scana(arr) for(ll i=0,i<n;i++) cin>>arr[i];
#define mod 1000000007
using namespace std;

ll connectedComponents(vector<string> &arr,set< pair<ll,ll> > &st,ll i,ll j,ll n,ll m){
    if (i >= n || j >= m || i < 0 || j < 0)
        return 0;
    if (arr[i][j] == '0')
        return 0;
    if (st.find({i,j}) != st.end())
        return 0;
    st.insert({i,j});
    ll right = connectedComponents(arr,st,i,j+1,n,m);
    ll down = connectedComponents(arr,st,i+1,j,n,m);
    ll top = connectedComponents(arr,st,i-1,j,n,m);
    ll left = connectedComponents(arr,st,i,j-1,n,m);
    return (1 + right + down + top + left);
}


int main(){
    w(t){
        ll n,m;
        cin>>n>>m;
        vector<string> arr(n);
        f(i,0,n){
            cin>>arr[i];
        }
       
        set< pair<ll,ll> > st;
        vector<ll> v;
        f(i,0,n){
            f(j,0,m){
                if(arr[i][j] == '0') continue;
                if(st.find({i,j}) == st.end()){
                    st.insert({i,j});
                    ll lft,rght,top,down;
                    lft=connectedComponents(arr,st,i,j-1,n,m);
                    rght=connectedComponents(arr,st,i,j+1,n,m);
                    top=connectedComponents(arr,st,i-1,j,n,m);
                    down=connectedComponents(arr,st,i+1,j,n,m);
                    v.push_back(1+lft+rght+top+down);
                }
            }
        }

        sort(v.begin(),v.end(),greater<ll>());
        ll ans=0;
        for(ll i=1;i<v.size();i+=2){
            ans+=v[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}