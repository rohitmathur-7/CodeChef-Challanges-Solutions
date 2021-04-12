#include<bits/stdc++.h>
#define ll long long int
#define f(i,a,b) for(ll i=a;i<b;i++)
#define w(t) ll t;cin>>t;while(t--)
#define mod 1000000007
using namespace std;

int main(){
    w(t){
        ll n,m,k;
        cin>>n>>m>>k;
        ll arr[n+1][m+1];
        ll sum[n+1][m+1];
        ll og_sum[n+1][m+1];
        memset(sum,0,sizeof(sum));
        ll ans=0;
        // bool s_elements[1000005];
        // memset(elements,false,sizeof(elements));
        f(j,0,m+1){
            arr[0][j]=0;
            og_sum[0][j]=0;
        }
        f(i,1,n+1){
            f(j,1,m+1){
                cin>>arr[i][j];
                og_sum[i][0]=0;
                og_sum[i][j]=arr[i][j]+og_sum[i-1][j]+og_sum[i][j-1]-og_sum[i-1][j-1];
                // cout<<"i: "<<i<<" j: "<<j<<endl;
                // cout<<"og_sum[i][j]: "<<og_sum[i][j]<<endl;
                if(arr[i][j]>=k){
                    ans++;
                }
                if(i>=0 && (j-1)>=0) sum[i][j]+=sum[i][j-1];
                sum[i][j]+=arr[i][j];
                //logic
                if(i>=2 && j>=2){
                    ll r=i,c=j;
                    r--,c--;
                    if(r>=1 && c>=1){
                        while(r>=1 && c>=1){
                            ll s;
                            ll row=i-r+1;
                            ll column=j-c+1;
                            ll elements=row*column;
                            //i,j->abhi wale(current) and r,c->previous wale
                            s=og_sum[i][j]-og_sum[i][c-1]-og_sum[r-1][j]+og_sum[r-1][c-1];
                            // cout<<"s: "<<s<<endl;
                            ll d=(s/elements);
                            if(d >= k){
                                ans++;
                            }
                            r--;
                            c--;
                        }
                    }
                }
            }
        } 
        cout<<ans<<endl;       
    }
    return 0;
}