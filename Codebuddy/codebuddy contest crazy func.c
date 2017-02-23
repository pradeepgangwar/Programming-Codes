#include <stdio.h>
long long int fac[10000007];
long long int ans[10000007];

int compute()
{
    long long int i;
    fac[0]=1;
    for(i=1;i<=(int)1e7;i++)
        fac[i]=(i*fac[i-1])%1000000007;

    ans[0]=1;
    for(i=1;i<=(int)1e7;i++)
        ans[i]=(fac[i]*ans[i-1])%1000000007;

    return 0;
}
int main()
{
    long long int n,m;
    compute();
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld",&m);
        printf("%lld",ans[m]);
    }

    return 0;
}
