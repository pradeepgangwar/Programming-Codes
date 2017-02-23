#include<stdio.h>
long long int ans[10000007];
long long int fact[10000007];
int precompute()
{
	long long int i;
	fact[0]=1;
	//compute the factorial of all the number till 10^7
	for(i=1;i<=(int)1e7;i++)
		fact[i]=(i*fact[i-1])%1000000007;
	//the ans for any number i is product of factorial of all the number upto i
	ans[0]=1;
	for(i=1;i<=(int)1e7;i++)
		ans[i]=(fact[i]*ans[i-1])%1000000007;
	return 0;
}
int main()
{
	//freopen("input5.txt","r",stdin);
	//freopen("output5.txt","w",stdout);
	precompute();
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int m;
		scanf("%d",&m);
		printf("%lld\n",ans[m]);
	}
	return 0;
}
