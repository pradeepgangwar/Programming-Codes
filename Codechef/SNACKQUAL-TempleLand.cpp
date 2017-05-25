#include<bits/stdc++.h>
using namespace std;
 
#define s(a) scanf("%d",&a)
#define p(a) printf("%d",a)
 
int main()
{
    int a[1000],i,t,n,flag=0;
    s(n);
    while(n--)
    {
        flag = 0;
        s(t);
        for(i=0;i<t;i++)
            s(a[i]);
        if(t%2 == 0)
        {
            cout<<"no"<<endl;
            continue;
        }
        else
        {
            if(a[0]!=1)
            {
                cout<<"no"<<endl;
                continue;
            }
            if(a[t-1]!=1)
            {
                cout<<"no"<<endl;
                continue;
            }
            
            for(i=1;i<t;i++)
            {
                if(abs(a[i]-a[i-1]) != 1)
                {
                    cout<<"no"<<endl;
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                cout<<"yes"<<endl;
            
        }
    }
} 