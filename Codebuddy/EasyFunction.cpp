#include<bits/stdc++.h>
using namespace std;
 
#define s(a) scanf("%d",&a)
#define p(a) printf("%d",a)
#define ll long long int
#define ls(a) scanf("%lld",&a)
#define lp(a) printf("%lld",a)

ll EasyFunction(ll a, ll b)
{
    while(a > 0 && b > 0)
   	{
   		if (a >= b)
            a = a - ((a/b)*b);
        else
            b = b - ((b/a)*a);
   	}
    return max(a, b);
}
 
int main()
{
    ll t,n,w,ans;
    ls(t);
    while(t--)
	{
		ls(n);
		ls(w);
		ans = EasyFunction(n,w);
		lp(ans);
		printf("\n");
	}
	return 0;    
}  
