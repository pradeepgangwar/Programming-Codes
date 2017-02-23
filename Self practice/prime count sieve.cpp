#include<stdio.h>
int main()
{
    long long int a,count=0,i,j;
    int b[100001]={0};
    for(i=2;i<=100000;i++)
    {
        if (b[i]==0)
      {
        for(j=i;j*i<=100001;j++)
            b[i*j]=1;
      }
    }
    scanf("%lld",&t);
    while(t--){
     scanf("%lld",&a);
    for(i=2;i<=a;i++)
    {
        if (b[i]==0)
          count++;
    }
    printf("%d",count);
}
