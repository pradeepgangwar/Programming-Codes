#include<stdio.h>
int main()

{
   long long int a[3],temp,i,j,k;

   for(i=0;i<3;i++)
    scanf("%lld",&a[i]);

   temp=a[0];
   for(j=0;j<3;j++)
    {
        if(a[j]>temp)
        temp=a[j];
    }
    printf("%lld",temp);
    return 0;
}
