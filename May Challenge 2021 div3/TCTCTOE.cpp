#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define scana(arr) for(ll i=0,i<n;i++) cin>>arr[i];
#define mod 1000000007
using namespace std;

int main(){
    w(t){
        vector<string> v;
        string s;
        ll x=0,o=0,underscore=0;
        f(i,0,3){
            cin>>s;
            v.push_back(s);
        }
        f(i,0,3){
            f(j,0,3){
                if(v[i][j]=='X') x++;
                else if(v[i][j]=='O') o++;
                else underscore++;
            }
        }

        //check if position is unrechable
        //for rows
        bool xx=false,oo=false;
        ll cntx=0,cnto=0;
        if(v[0][0]==v[0][1] && v[0][0]==v[0][2] && (v[0][0]=='X'||v[0][0]=='O')){
            if(v[0][0]=='X'){
                xx=true;cntx++;
            }
            if(v[0][0]=='O'){
                oo=true;cnto++;
            }
        }
        if(v[1][0]==v[1][1] && v[1][0]==v[1][2] && (v[1][0]=='X'||v[1][0]=='O')){
            if(v[1][0]=='X'){
                xx=true;cntx++;
            }
            if(v[1][0]=='O'){
                oo=true;cnto++;
            }
        }
        if(v[2][0]==v[2][1] && v[2][0]==v[2][2] && (v[2][0]=='X'||v[2][0]=='O')){
            if(v[2][0]=='X'){
                xx=true;cntx++;
            }
            if(v[2][0]=='O'){
                oo=true;cnto++;
            }
        }
        //for columns
        if(v[0][0]==v[1][0] && v[0][0]==v[2][0] && (v[0][0]=='X'||v[0][0]=='O')){
            if(v[0][0]=='X'){
                xx=true;cntx++;
            }
            if(v[0][0]=='O'){
                oo=true;cnto++;
            }
        }
        if(v[0][1]==v[1][1] && v[0][1]==v[2][1] && (v[0][1]=='X'||v[0][1]=='O')){
            if(v[0][1]=='X'){
                xx=true;cntx++;
            }
            if(v[0][1]=='O'){
                oo=true;cnto++;
            }
        }
        if(v[0][2]==v[1][2] && v[0][2]==v[2][2] && (v[0][2]=='X'||v[0][2]=='O')){
            if(v[0][2]=='X'){
                xx=true;cntx++;
            }
            if(v[0][2]=='O'){
                oo=true;cnto++;
            }
        }
        //for diagonals
        if(v[0][0]==v[1][1] && v[0][0]==v[2][2] && (v[0][0]=='X'||v[0][0]=='O')){
            if(v[0][0]=='X'){
                xx=true;cntx++;
            }
            if(v[0][0]=='O'){
                oo=true;cnto++;
            }
        }
        if(v[0][2]==v[1][1] && v[0][2]==v[2][0] && (v[0][2]=='X'||v[0][2]=='O')){
            if(v[0][2]=='X'){
                xx=true;cntx++;
            }
            if(v[0][2]=='O'){
                oo=true;cnto++;
            }
        }


        //conditions for not reachable(for 3)
        if(xx && oo) cout<<3<<endl;
        else if(o>x) cout<<3<<endl;
        else if(xx && o>=x) cout<<3<<endl;
        else if(oo && x>o) cout<<3<<endl;
        // else if(cntx>1 || cnto>1) cout<<3<<endl;
        else if((x-o)>1) cout<<3<<endl;

        else{
            //conditions for 1
            if(xx  || oo) cout<<1<<endl;
            else if(underscore==0 && !xx && !oo) cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
    return 0;
}