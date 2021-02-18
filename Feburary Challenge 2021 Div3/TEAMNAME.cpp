https://www.codechef.com/FEB21C/problems/TEAMNAME/
//20 POINTS
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_set<string> str;
        map<string,bool> isPresent;
        bool g=true;
        char q;
        string s;
        for(int i=0;i<n;i++){
            cin>>s;
            str.insert(s);
            isPresent[s]=true;
            if(i==0){
                q=s[0];
            }
            if(i!=0 && s[0]!=q) g=false;
        }
        if(g){
            cout<<"0"<<endl;
            continue;
        }
        int ans=0;
        string a,b;
        char aa,bb;
        unordered_set<string>::iterator it;
        for(auto x:str){
            // cout<<x<<endl;
            for(auto y:str){
                if(x==y) continue;
                a=x;b=y;
                aa=x[0];bb=y[0];
                a[0]=bb;b[0]=aa;
                it=find(str.begin(),str.end(),a);
                if(it!=str.end()){
                    continue;
                }
                it=find(str.begin(),str.end(),b);
                if(it!=str.end()){
                    continue;
                }
                ans+=2;
            }
        }
        cout<<ans/2<<endl;
    }
    return 0;
}