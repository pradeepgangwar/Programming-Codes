#include<bits/stdc++.h>
using namespace std;
 
#define s(a) scanf("%d",&a)
#define p(a) printf("%d",a)
#define ll long long int
#define ls(a) scanf("%lld",&a)
#define lp(a) printf("%lld",a)
 
int main()
{
    ll t,n,i,j,a[120],count;
    bool check = true, seven = false;
    ls(t);
    while(t--)
    {
        check = true;
        seven = false;
        count = 0;
        ls(n);
        for(i=0;i<n;i++)
        {
            ls(a[i]);
            if(a[i]>=8 || a[i]<=0)
            {
               	check = false;             	
            }
         }
        if(check == false)
        {
        	cout<<"no"<<endl;
        	continue;
        }
        for(i=0;i<=n/2;i++)
        {
            if(i==0)
            {
            	if(a[i] != 1)
            	{
	                check = false;
	                break;
	            }
            }
            else
            { 
            	if(a[i] == a[i-1]+1)
            	{            		
            		count++;
            	}
             	if(a[i]!=a[i-1] && a[i]!=a[i-1]+1)
               	{
                  	check = false; 
               	}
            }
        }

        if(count != 6)
        {
        	check = false;
        }

        if(check == false)
            cout<<"no"<<endl;
        else
        {
            for(i=0;i<=n/2;i++)
            {
                if(a[i]!=a[n-i-1])
                    check = false;
            }
            if(check == false)
            {
                cout<<"no"<<endl;
            }
            else
                cout<<"yes"<<endl;
        }
    }
}  
