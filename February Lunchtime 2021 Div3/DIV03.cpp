#include<bits/stdc++.h>
using namespace std;

int main(){
    long t;
    cin>>t;
    while(t--){
        long arr[11];
        for(long i=1;i<=10;i++){
            cin>>arr[i];
        }
        long k;
        cin>>k;
        bool g1=false,g2=false;
        if(k<arr[10]){
            cout<<10<<endl;
        }
        else if(k==arr[10]){
            for(long i=9;i>=1;i--){
                if(arr[i]>0){
                    cout<<i<<endl;
                    g1=true;
                    break;
                }
                if(g1) break;
            }
        }
        else{
            // long d=k-arr[10];
            for(long i=10;i>=1;i--){
                k-=arr[i];
                if(k<0){
                    cout<<i<<endl;
                    g2=true;
                    break;
                }
                if(g2) break;
            }
        }
    }
}