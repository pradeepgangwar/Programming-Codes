#include <bits/stdc++.h>
using namespace std;
 
#define s(a) scanf("%d",&a)
#define p(a) printf("%d",a)
#define ll long long int
#define ls(a) scanf("%lld",&a)
#define lp(a) printf("%lld",a)
 
int main()
{
    int t,n,a[1002],b[1002],localmin,min,i,j,m,p;
    s(t);
    while(t--)
    {
        min=10000000;
        s(n);
        for(i=0;i<n;i++)
            s(a[i]);
        sort(a,a+n);
        s(m);
        for(j=0;j<m;j++)
            s(b[j]);
        sort(b,b+m);
        for(i=0;i<n;i++)
        {
            localmin=10000000;
            for(j=0;j<m;j++)
            {
                p = abs(a[i]-b[j]);
                //cout<<"localmin "<<p<<' '<<localmin<<' '<<min<<endl;
                if(p<=localmin)
                    localmin = p;
                else
                    break;
            }
            if(localmin<=min)
                min = localmin;
        }
        p(min);cout<<endl;
    }
    return 0;
}

