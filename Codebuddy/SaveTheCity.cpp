#include<bits/stdc++.h>
using namespace std;
 
#define s(a) scanf("%d",&a)
#define p(a) printf("%d",a)
#define ll long long int
#define ls(a) scanf("%lld",&a)
#define lp(a) printf("%lld",a)
 
int main()
{
    ll t,n,m,a[100003],pro,i;
    ls(t);
    while(t--)
	{
		pro = 1;
		ls(n);
		ls(m);
		for(i=0;i<n;i++)
		{
			ls(a[i]);
			pro = (pro * a[i])%m;
		}
		lp(pro);
		printf("\n");
	}
	return 0;    
}  
