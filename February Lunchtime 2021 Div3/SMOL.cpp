#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        if(k==0) cout<<n<<endl;
        else{
            long long int d=(n%k);
            cout<<d<<endl;
        }
    }
}