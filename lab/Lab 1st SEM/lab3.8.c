#include<stdio.h>
int main()
{
    int a[100],c=2,n,i;
    a[0]=0;
    a[1]=1;
    printf("Enter The numbers of fibonacci numbers you want to print=");
    scanf("%d",&n);
    for(i=2;i<n;i++)
       {
          a[i]=a[i-1]+a[i-2];
       }
    for(i=0;i<n;i++)
       printf(" %2d ",a[i]);

    printf("\n");
     return 0;
}
