#include<bits/stdc++.h>
using namespace std;
 
#define s(a) scanf("%d",&a)
#define p(a) printf("%d",a)
#define ll long long int
#define ls(a) scanf("%lld",&a)
#define lp(a) printf("%lld",a)
 
int main()
{
    ll t,p,q,r;
    ls(t);
    while(t--)
    {
        ls(p);ls(q);ls(r);
        for(i=0;i<p;i++)
        {
            ls(a[i]);
        }
        for(i=0;i<q;i++)
        {
            ls(b[i]);
        }
        j=0;
        for(i=0;i<r;i++)
        {
            ls(c[i]);
            proxz[i][j] = a[i]*c[j];
            sumxz[i][j] = a[i] + c[j];
        }
        
    }
}  
