#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long int t,x11,x12,x21,x22,y11,y12,y21,y22;
	cin>>t;
	while(t--)
	{
	    cin>>x11>>y11>>x12>>y12;
	    cin>>x21>>y21>>x22>>y22;
	    
	    if( (y11==y12) && (y21==y22) && (y11==y21))
	    {
	        if( (min(x11,x12)<=min(x21,x22) && max(x11,x12)>=min(x21,x22)) || (min(x11,x12)<=max(x22,x21) && max(x11,x12)>=max(x22,x21)) || (min(x11,x12)>=min(x21,x22) && max(x11,x12)<=max(x21,x22)))
	            cout<<"yes"<<endl;
	        else
	            cout<<"no"<<endl;
	    }
	    else if( (x11==x12) && (x21==x22) && (x11==x21))
	    {
	        if( (min(y11,y12)<=min(y21,y22) && max(y11,y12)>=min(y21,y22)) || (min(y11,y12)<=max(y21,y22) && max(y11,y12)>=max(y21,y22)) || (min(y11,y12)>=min(y22,y21) && max(y11,y12)<=max(y21,y22)))
	            cout<<"yes"<<endl;
	        else
	            cout<<"no"<<endl;
	    }
	    else if((y11==y12) && (x21==x22))
	    {
	        if(x11==x21 && (y11==y21 || y11==y22))
	            cout<<"yes"<<endl;
	        else if(x12==x21 && (y11==y21 || y11==y22))
	            cout<<"yes"<<endl;
	        else
	            cout<<"no"<<endl;
	    }
	    else if((x11==x12) && (y21==y22))
	    {
	        if(x21==x11 && (y21==y11 || y21==y12))
	            cout<<"yes"<<endl;
	        else if(x22==x11 && (y21==y11 || y21==y12))
	            cout<<"yes"<<endl;
	        else
	            cout<<"no"<<endl;
	    }
	    else
	        cout<<"no"<<endl;
	}
	return 0;
}  