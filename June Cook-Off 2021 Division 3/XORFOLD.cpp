#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define scana(arr) for(ll i=0,i<n;i++) cin>>arr[i];
#define printa(arr) for(ll i=0,i<n;i++) cout<<arr[i];
#define vl vector<int>
#define vpl vector< pair<ll,ll> >
#define pb push_back
#define mp make_pair
#define mod 1000000007
using namespace std;
                     
//************************
//Important functions
                      
//gcd
/*
ll gcd(ll a,ll b){
    //base case
    if(b==0) return a;
    //rec case
    return gcd(b,a%b);
}
*/
                        
//extended euclid algorithm
/*
void extendedEuclidAlgorithm(ll a,ll b){
    //base case
    if(b==0){
        x=1;y=0;
        GCD=a;
        return;
    }
    //rec case
    extendedEuclidAlgorithm(b,a%b);
    ll cx=y;
    ll cy=x-((a/b)*y);
                    
    x=cx;
    y=cy;
}
*/
                        
//to compute a^b
/*
ll fast_modulo_exponentation(ll a,ll b){
    ll ans=1;
    while(b){
        if(b&1){
            ans*=a;
        }
        a*=a;
        b>>=1;
    }
    return ans;
}
*/
 
//to find multiplicative modulo inverse
/*
void multiplicative_modulo_inverse(ll a,ll m){
    if(gcd(a,m)==1){
        extendedEuclidAlgorithm(a,m);
        //as the func can return -ve value also, so to return +ve value we do (x+m)%m.
        cout<<(x+m)%m<<endl;
    }
    else cout<<
Multiplicative modulo inverse is not possible!
<<endl;
}
*/
 
//prime sieve
/*
void prime_sieve(long long *p,long long n){
    for(long long i=3;i<=100000;i+=2) p[i]=1;
 
    for(long long i=3;i<=100000;i+=2){
    if(p[i]==1){
        for(long long j=i*i;j<=100000;j+=i){
            p[j]=0;
        }
        }
        }
    p[2]=1;
    p[1]=0;p[0]=0;
    for(long long i=0;i<=n;i++){
    if(p[i]==1) cout<<i<<
;
    }
}
*/
//************************
 
int main(){
 
    w(t){
        ll n,m;
        cin>>n>>m;
        // string s;
        string arr[n];
        f(i,0,n){
            cin>>arr[i];
        }
        ll hr,vr,prev;
        vl v,h;
        // cout<<'1'-48<<endl;
        f(i,0,n){
            f(j,0,m){
                if(j==0) h.pb(int(arr[i][j]-48));
                else h[i]^=int(arr[i][j]-48);

                if(i==0) v.pb(int(arr[i][j]-48));
                else v[j]^=int(arr[i][j]-48); 
            }
        }


        // f(i,0,v.size()){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        // f(i,0,h.size()){
        //     cout<<h[i]<<" ";
        // }
        int xr1,xr2;
        f(i,0,m){
            if(i==0) xr1=v[i];
            else xr1^=v[i];
        }
        f(i,0,n){
            if(i==0) xr2=h[i];
            else xr2^=h[i];
        }   

        // cout<<xr1<<" "<<xr2<<endl;
        if(xr1==1 && xr2==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
     
    return 0;
}