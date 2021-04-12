#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
#define w(t) int t;cin>>t;while(t--)
#define ll long long int
#define mod 1000000007
using namespace std;

float roundIt(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

int main(){
    w(t){
        float k1,k2,k3,v;
        cin>>k1>>k2>>k3>>v;
        float d=k1*k2*k3*v;
        float ans=100/d;
        ans = roundIt(ans);
        float cmp=9.58;
        if(ans < cmp) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}