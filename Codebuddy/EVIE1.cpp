#include<bits/stdc++.h>
using namespace std;
 
#define s(a) scanf("%d",&a)
#define p(a) printf("%d",a)
#define ll long long int
#define ls(a) scanf("%lld",&a)
#define lp(a) printf("%lld",a)

ll a[100003],b[100003],c[100003],d[100003],sum[100003];


void precompute()
{
	ll i;
	a[0] = 1;a[1] = 3;
	b[0] = 1;b[1] = 5;
	c[0] = 1;c[1] = 7;
	d[0] = 1;d[1] = 9;
	sum[0] = 1;
	sum[1] = 25;
	for(i=2;i<=50000;i++)
	{
		a[i] = (a[i-1] - a[i-2] + 8) + a[i-1];
		b[i] = (b[i-1] - b[i-2] + 8) + b[i-1];
		c[i] = (c[i-1] - c[i-2] + 8) + c[i-1];
		d[i] = (d[i-1] - d[i-2] + 8) + d[i-1];
		sum[i] = sum[i-1] + a[i] + b[i] + c[i] + d[i];
	}
}
 
int main()
{
    ll t,n,w,ans;
    precompute();
    ls(t);
    while(t--)
	{
		ls(n);
		n = (n-1)/2;
		lp(sum[n]);
		printf("\n");
	}
	return 0;    
}  
