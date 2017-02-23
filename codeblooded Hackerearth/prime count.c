#include<stdio.h>
long long int b[10000002]={0};
int main()
{
    long long int a,i,j,q;


    scanf("%lld",&a);

    for(i=2;i*i<=10000000;i++)
    {
        if (b[i]==0)
      {
        for(j=i;j*i<=10000000;j++)
            b[i*j]=1;
      }
    }
    for(i=2;i<=10000000;i++)
    {
        if (b[i]==0)
          b[i]=b[i-1]+1;
        else
            b[i]=b[i-1];
    }
    for(i=0;i<a;i++)
    {
        scanf("%lld",&q);
        printf("%lld\n",b[q]);
    }
    return 0;
}
