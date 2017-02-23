// this is problem on codechef

#include<stdio.h>
int main()

{
    int n,a[200],i;
    scanf("%d",&n);
    for(i=0;i<2*n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        printf("%d  %d\n",(a[2*i]*(a[2*i]>=a[2*i+1])+a[2*i+1]*(a[2*i+1]>a[2*i])),(a[2*i]+a[2*i+1]));
    }
    return 0;
}
