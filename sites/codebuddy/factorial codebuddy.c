//this is factorial problem on codebuddy

#include<stdio.h>
int  main()
{
    int a,b[1000],i;
    long long int c=1,p[1000],d,j,k;
    scanf("%d",&a);
    while(a>=1&&a<=1000)
    {
    for(i=0;i<a;i++)
        scanf("%d",&b[i]);
    break;
    }
    for(i=0;i<a;i++)
    {
        for(j=b[i];j>0;j--)
        {
            c=c*j;
        }
        p[i]=c;
        c=1;
    }
    for(k=0;k<a;k++)
    {
        d=p[k]%1000000007;
        printf("%lld\n",d);
    }
    return 0;
}
