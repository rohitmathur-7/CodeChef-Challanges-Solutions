#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define scana(arr) for(ll i=0,i<n;i++) cin>>arr[i];
#define printa(arr) for(ll i=0,i<n;i++) cout<<arr[i];
#define vl vector<ll>
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
        ll n;
        cin>>n;
        // ll arr[n];
        vl v;
        f(i,0,n){
            ll x;
            cin>>x;
            v.pb(x);
        }
        ll pos1=find(v.begin(),v.end(),1)-v.begin();
        ll pos2=find(v.begin(),v.end(),2)-v.begin();
        ll pos3=find(v.begin(),v.end(),3)-v.begin();
        ll pos4=find(v.begin(),v.end(),4)-v.begin();
        ll pos5=find(v.begin(),v.end(),5)-v.begin();
        ll pos6=find(v.begin(),v.end(),6)-v.begin();
        ll pos7=find(v.begin(),v.end(),7)-v.begin();

        ll mn,mx;
        mn=min(pos1,pos2);
        mn=min(mn,pos3);
        mn=min(mn,pos4);
        mn=min(mn,pos5);
        mn=min(mn,pos6);
        mn=min(mn,pos7);

        mx=max(pos1,pos2);
        mx=max(mx,pos3);
        mx=max(mx,pos4);
        mx=max(mx,pos5);
        mx=max(mx,pos6);
        mx=max(mx,pos7);

        mx++;
        ll ans=abs(mx-mn);
        ans+=mn;
        
        cout<<ans<<endl;
    }
     
    return 0;
}