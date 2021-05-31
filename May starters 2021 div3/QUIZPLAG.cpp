#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define scana(arr) for(ll i=0,i<n;i++) cin>>arr[i];
#define vl vector<ll>
#define vpl vector< pair<ll,ll> >
#define pb push_back
#define mod 1000000007
using namespace std;
                     
int main(){
    w(t){
        ll k;
        cin>>k;
        vector<char> a,b;
        // char a[13],b[13];
        f(i,0,13){
            a.pb(char(97+i));
        }
        f(i,0,13){
            b.pb(char(78+i));
        }
        bool game=true;
        f(i,0,k){
            string s;
            cin>>s;
            bool aa=false,bb=false,oo=false;
            f(i,0,s.size()){
                if(find(a.begin(),a.end(),s[i])!=a.end()){
                    aa=true;
                }
                if(find(b.begin(),b.end(),s[i])!=b.end()){
                    bb=true;
                }
                if(find(a.begin(),a.end(),s[i])==a.end() && find(b.begin(),b.end(),s[i])==b.end()){
                    oo=true;
                }

                if(oo) game=false;
                if(aa && bb) game=false;   
            }          
        }

        if(!game) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
     
    return 0;
}