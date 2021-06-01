//30 points

#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define scana(arr) for(ll i=0,i<n;i++) cin>>arr[i];
#define vl vector<ll>
#define vpl vector< pair<ll,ll> >
#define pb push_back
#define mp make_pair
#define mod 1000000007
using namespace std;

ll modular_multiplication(ll a,ll b,ll m){
    ll res=0;
    while(b){
        if(b&1ll){
            res+=a;
        }
        a*=2;
        b>>=1;
        res%=m;
        a%=m;
    }
    return res;
}

//used to a^d
ll modular_exponentiation(ll a,ll d,ll m){
    ll res=1;
    while(d){
        if(d&1ll){
            // res*=a;
            res=modular_multiplication(res,a,m);
        }
        a=modular_multiplication(a,a,m);
        a%=m;
        d>>=1;
    }
    return res;
}


bool miller_rabin(ll n){
    if(n==1) return false;
    if(n==2) return true;
    if(n%2==0) return false;

    //now as n is odd, so n-1 will be even.
    ll d=n-1,s=0;
    while(d%2==0){
        s++;
        d/=2;
    }

    // n-1 = d*(2^s)   , here d is an odd number.

    vector<ll> a({2,3,5,7,11,13,17,19,23});

    f(i,0,a.size()){
        if(a[i]>n-2) continue;  //as a lies in range [2,n-2]
        //check if (a^d)%n==1, calculate a^d using modular exponentiation
        ll ad=modular_exponentiation(a[i],d,n);
        if(ad%n==1) continue;
        bool prime=false;
        f(j,0,s){
            ll tr=modular_exponentiation(2,j,n);
            ll adtr=modular_exponentiation(ad,tr,n);
            if(adtr==(n-1)){
                prime=true;
                break; 
            }
        }
        if(prime==false) return false;
    }
    return true;    
}

                     
int main(){
    w(t){
        ll n;
        cin>>n;
        ll ans;
        if(n<=3) ans=0;
        else ans=1;
        for(ll i=2;i<=n;i++){
            if(miller_rabin(i)){
                if(i*2>n) ans++;
            }
        }
        cout<<ans<<endl;
    }
     
    return 0;
}