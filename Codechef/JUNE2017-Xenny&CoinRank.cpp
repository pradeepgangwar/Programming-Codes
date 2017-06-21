#include<bits/stdc++.h>
using namespace std;
 
#define s(a) scanf("%d",&a)
#define p(a) printf("%d",a)
#define ll long long int
#define ls(a) scanf("%lld",&a)
#define lp(a) printf("%lld",a)
 
int main()
{
    ll t,u,v,temp,ans,n;
    ls(t);
    while(t--)
    {
        ls(u);ls(v);
        n = (v*(v+1))/2 + 1;
        temp = (u*v) - 1;
        temp += ((u+1)*(u+2))/2;
        ans = n+temp;
        lp(ans);
        cout<<endl;
    }
}  
