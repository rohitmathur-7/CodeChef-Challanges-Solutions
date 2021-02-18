https://www.codechef.com/FEB21C/problems/MEET/

#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string p,res;
        getline(cin,p);
        if(p.length()==0) getline(cin,p);
        stringstream str(p);
        int hour,min,c1=0,c2=0,c3=0;
        string am_pm;

        while(getline(str,res,' ')){
            if(c1==0){
                stringstream str1(res);
                string one;
                while(getline(str1,one,':')){
                    if(c2==0){
                        stringstream num(one);
                        num >> hour;
                    }
                    else{
                        stringstream num1(one);
                        num1 >> min;
                    }
                    c2++;
                }
            }
            else am_pm=res;
            c1++;
        }

        if(am_pm=="AM"){
            if(hour==12) hour=0;
        }
        else{
            if(hour!=12) hour+=12;
        }
        
        int n;
        cin>>n;
        int hour1,min1,hour2,min2;
        while(n--){
            //For L
            string l;
            getline(cin,l);
            if(l.length()==0) getline(cin,l);
            string l_res,l_am_pm,r_am_pm;
            c1=0,c2=0,c3=0;
            stringstream str_l(l);
            while(getline(str_l,l_res,' ')){
            	if(c1==0){
                	stringstream str2(l_res);
                	string one;
                	while(getline(str2,one,':')){
                    	if(c2==0){
                        	stringstream num2(one);
                        	num2 >> hour1;
                    	}
                    	else{
                        	stringstream num3(one);
                        	num3 >> min1;
                    	}
                    	c2++;
                	}
            	}
            	else if(c1==1) l_am_pm=l_res;
                else if(c1==2){
                    stringstream str2(l_res);
                	string one;
                	while(getline(str2,one,':')){
                    	if(c3==0){
                        	stringstream num2(one);
                        	num2 >> hour2;
                    	}
                    	else{
                        	stringstream num3(one);
                        	num3 >> min2;
                    	}
                    	c3++;
                	}
                }
                else r_am_pm=l_res;
            	c1++;
        	}
        	if(l_am_pm=="AM"){
                if(hour1==12) hour1=0;
            }
            else{
                if(hour1!=12) hour1+=12;
            }

            if(r_am_pm=="AM"){
                if(hour2==12) hour2=0;
            }
            else{
                if(hour2!=12) hour2+=12;
            }


            if(hour>=hour1 && hour<=hour2){
                if(hour>hour1 && hour<hour2) cout<<"1";
                else if(hour==hour1){
                    if(hour1==hour2){
                        if(min>=min1 && min<=min2) cout<<"1";
                        else cout<<"0";
                    }
                    else{
                        if(min>=min1) cout<<"1";
                        else cout<<"0";
                    }
                }
                else if(hour==hour2){
                    if(hour1==hour2){
                        if(min>=min1 && min<=min2) cout<<"1";
                        else cout<<"0";
                    }
                    else{
                        if(min<=min2) cout<<"1";
                        else cout<<"0";
                    }
                }
            }
            else cout<<"0";
        }
        cout<<endl;
    }
    return 0;
}
