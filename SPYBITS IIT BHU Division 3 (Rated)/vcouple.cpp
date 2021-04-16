#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int boys[n],girls[n];
        for(int i=0;i<n;i++){
            cin>>boys[i];
        }
        for(int i=0;i<n;i++){
            cin>>girls[i];
        }
        sort(boys,boys+n);
        sort(girls,girls+n,greater<int>());
        for(int i=0;i<n;i++){
            boys[i]+=girls[i];
        }
        int mx=*(max_element(boys,boys+n));
        cout<<mx<<endl;
    }
}