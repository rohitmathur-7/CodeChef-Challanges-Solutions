#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        vector<int> duplicate;
        multimap<int,int> m;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            arr.push_back(x);
            duplicate.push_back(x);
        }
        sort(arr.begin(),arr.end(),greater<int>());
        int cnt=1;
        for(int i=0;i<n;i++){
            m.insert(pair<int,int> (arr[i],cnt));
            cnt++;
        }
        multimap<int,int>::iterator it;
        for(int i=0;i<n;i++){
            it=m.find(duplicate[i]);
            cout<<it->second<<" ";
            m.erase(it);
        }
        cout<<endl;
    }
}