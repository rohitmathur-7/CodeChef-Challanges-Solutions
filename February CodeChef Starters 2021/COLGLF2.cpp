#include<iostream>
using namespace std;

int main(){
    long t;
    cin>>t;
    while(t--){
        long s;
        cin>>s;
        long intro[s];
        for(long i=0;i<s;i++){
            cin>>intro[i];
        }
        long episodes[s];
        long ans=0;
        for(long i=0;i<s;i++){
            cin>>episodes[i];
            long x;
            for(long j=0;j<episodes[i];j++){
                cin>>x;
                if(j==0) ans+=x;
                else ans=ans+(x-intro[i]);
            }
        }
        cout<<ans<<endl;
    }
}