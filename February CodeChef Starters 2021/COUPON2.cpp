#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int d,c;
        cin>>d>>c;
        int a1,a2,a3,b1,b2,b3;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;
        int sum1=a1+a2+a3;
        int sum2=b1+b2+b3;
        int delivery=sum1+sum2+(2*d);
        int coupon=c+sum1+sum2;
        if(sum1<150){
            coupon+=d;
        }
        if(sum2<150){
            coupon+=d;
        }
        // cout<<delivery<<" "<<coupon<<endl;
        if(delivery <= coupon) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}