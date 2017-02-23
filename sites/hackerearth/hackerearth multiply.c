// this is beginner multiplication problem

#include<stdio.h>
int main()
{
    int b[1003],n,i;
    long long int a=1,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
        a=(a*b[i])%1000000007;

    printf("%lld",a);
    return 0;
}
