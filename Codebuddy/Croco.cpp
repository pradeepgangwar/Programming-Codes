#include<bits/stdc++.h>
using namespace std;
 
#define s(a) scanf("%d",&a)
#define p(a) printf("%d",a)
#define ll long long int
#define ls(a) scanf("%lld",&a)
#define lp(a) printf("%lld",a)
 
int main()
{
    ll t,n,w,a[100003],sum,i;
    ls(t);
    while(t--)
	{
		sum = 0;
		ls(n);
		ls(w);
		for(i=0;i<n;i++)
		{
			ls(a[i]);
			sum = (sum + a[i]);
		}
		if(sum == w)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;    
}  
