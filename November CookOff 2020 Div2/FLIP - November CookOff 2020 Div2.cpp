**QUESTION 2 : FLIP THE STRING(FLIP) November CookOff 2020 Div2**

**QUESTION EXPLANATION - **
 
IN THIS QUESTION WE ARE GIVEN TWO STRINGS A and B,
WE WANT TO CONVERT STRING A TO STRING B IN MINIMUM OPERATIONS.
A OPERATION IS DEFINED AS -> WE CAN SELECT ANY SUBSTRING OF STRING A OF ODD LENGTH AND REPLACE ITS VALUE BY 0/1.
EX - 
		A - 10001
		SO NOW IF WE SELECT SUBSTRING A(0)-A(2) = 100[LENGTH =3(ODD)]......THEN WE HAVE TO CHANGE THE VALUE AT ODD POSITIONS.
																		   	i.e 1 will become 0 as it was on 1st pos. (odd pos)
																		   		0 will remain same as it is at 2nd pos. (even pos)
																				0 will become 1 as it is at 3rd pos. (odd pos)
EX -
		A=100001
		B=110111
		Initially, A is "100001". We choose the substring "000" between the 2-nd and 4-th character and convert it to "101".
		Now A becomes "110101". We choose the string "0" containing only the 5-th character and convert it to "1".
		Finally, A becomes "110111", which is equal to B.
			
**SOLUTION EXPLANATION - **
	Okay So the main catch here is that...
	For Ex: 
			A=10010
			b=00011
	So lets suppose we take the substring ("10010").....Now we will replace the value at odd positions.
	So,
	 1 becomes 0 (position: 1)(which is what we want bcz b[0]=0 and a[0]=1....So we needed to convert the 0th value of a to 0.)
	 But now if we see, 
	 0 becomes 1 (position: 2)(But we do not want 0 to convert to 1..Bcz b[2]=0 and a[2]=0....So we didnt needed to convert the value at this position.)
	 
	Now how to tackle this problem?? 
	Okay so now what we will do is: 
	WE will first check for only odd positions that whether the value of string b is equal to value at string a or not...if not we will move to the next odd pos!..
	And we will do this until we find a odd position where the value at string a is equal to string b and then we will take the sub string till there only..
	Bcz if we take the next odd pos also where the value is equal, then its value will also change which we obviously do not want.
	And then we will increment the count.
	Now we will do the same for Even Positions too!  
	 
																				
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string a,b;
	    cin>>a>>b;
	    int ans=0;
	    for(int i=0;i<a.size();i+=2){
	        if(a[i]!=b[i]){
	           while(i<a.size() && a[i]!=b[i]){
	                i+=2;
	            }
	            ans++;    
	        }
	    }
	    for(int i=1;i<a.size();i+=2){
	        if(a[i]!=b[i]){
	           while(i<a.size() && a[i]!=b[i]){
	                i+=2;
	            }
	            ans++;    
	        }
	    }
	cout<<ans<<endl;    
	}
	return 0;
}
 
