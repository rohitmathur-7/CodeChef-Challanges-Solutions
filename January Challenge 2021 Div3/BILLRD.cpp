#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long n,k,x,y;
	    cin>>n>>k>>x>>y;
	    vector< pair<long,long> > v;
	    if(x==y) cout<<n<<" "<<n<<endl;
	    else{
	    	if(x>y){
	    		for(long i=0;i<=3;i++){
	    				if(x==n){
	    					x=y;
	    					y=n;
							v.push_back(make_pair(x,y));
						}
						else if(y==n){
							y=n-x;
							x=0;
							v.push_back(make_pair(x,y));
						}
						else if(x==0){
							x=y;
							y=0;
							v.push_back(make_pair(x,y));
						}
	    				else{
	    					long d=n-x;
	    					x=n;
	    					y+=d;
							v.push_back(make_pair(x,y));
						}
				}
				if(k==1) cout<<v[0].first<<" "<<v[0].second<<endl;
				else if(k==2) cout<<v[1].first<<" "<<v[1].second<<endl;
				else if(k==3) cout<<v[2].first<<" "<<v[2].second<<endl;
				else if(k==4) cout<<v[3].first<<" "<<v[3].second<<endl;
				else{
					if((k-1)%4==0) cout<<v[0].first<<" "<<v[0].second<<endl;
					else if((k-2)%4==0) cout<<v[1].first<<" "<<v[1].second<<endl;
					else if((k-3)%4==0) cout<<v[2].first<<" "<<v[2].second<<endl;
					else cout<<v[3].first<<" "<<v[3].second<<endl;
				}
			}
			else{
				for(long i=0;i<=3;i++){
	    				if(y==n){
	    					y=x;
	    					x=n;
							v.push_back(make_pair(x,y));
						}
						else if(x==n){
							x=n-y;
							y=0;
							v.push_back(make_pair(x,y));
						}
						else if(y==0){
							y=x;
							x=0;
							v.push_back(make_pair(x,y));
						}
	    				else{
	    					long d=n-y;
	    					y=n;
	    					x+=d;
							v.push_back(make_pair(x,y));
						}
				}
				if(k==1) cout<<v[0].first<<" "<<v[0].second<<endl;
				else if(k==2) cout<<v[1].first<<" "<<v[1].second<<endl;
				else if(k==3) cout<<v[2].first<<" "<<v[2].second<<endl;
				else if(k==4) cout<<v[3].first<<" "<<v[3].second<<endl;
				else{
					if((k-1)%4==0) cout<<v[0].first<<" "<<v[0].second<<endl;
					else if((k-2)%4==0) cout<<v[1].first<<" "<<v[1].second<<endl;
					else if((k-3)%4==0) cout<<v[2].first<<" "<<v[2].second<<endl;
					else cout<<v[3].first<<" "<<v[3].second<<endl;
				}
			}
		}
	}
	return 0;
}
