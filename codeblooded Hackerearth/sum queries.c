//codeblooded problem on hackerearth

#include<stdio.h>
int main()
{
    long long int n,c[200002],b[100002],sum[100003]={0},i,l,r,m;

    scanf("%lld",&n);

    for(i=0;i<n;i++)
        scanf("%lld",&b[i]);

    for(i=0;i<n;i++)
        sum[i+1]=sum[i]+b[i];

    scanf("%lld",&m);
    for(i=0;i<2*m;i+=2)
        {
            scanf("%lld %lld",&l,&r);
            if(l==r)
                printf("%lld\n",b[l-1]);
            else if(l<r)
                printf("%lld\n",(sum[r]-sum[l-1]));
        }

    return 0;
}
