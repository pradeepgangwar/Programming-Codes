#include<bits/stdc++.h>
using namespace std;
 
#define s(a) scanf("%d",&a)
#define p(a) printf("%d",a)
#define ll long long int
#define ls(a) scanf("%lld",&a)
#define lp(a) printf("%lld",a)
 
int main()
{
    int t,n,a[501],i;
    for(i=1;i<501;i++)
    {
        a[i] = i;
    }
    s(t);
    while(t--)
    {
        s(n);
        for(i=0;i<n;i++)
        {
            cout<<a[401+i]<<' ';
        }
        cout<<endl;
    }
}  
