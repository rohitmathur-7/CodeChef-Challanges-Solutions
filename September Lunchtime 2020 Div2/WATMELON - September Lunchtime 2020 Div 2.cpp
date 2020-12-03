//** QUES - WATMELON September Lunchtime 2020 Division 2 ** 

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int j=0;j<n;j++){
            cin>>arr[j];
            sum+=arr[j];
        }
        if(sum>=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
