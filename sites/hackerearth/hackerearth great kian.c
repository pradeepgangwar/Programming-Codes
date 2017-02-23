//Great kian problem on hackerearth

#include<stdio.h>
int main()
{
    int n,a[100009]={0},i;
    unsigned long long int x=0,y=0,z=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;a[i]!=0;i+=3)
        x=x+a[i];
    for(i=1;a[i]!=0;i+=3)
        y=y+a[i];
    for(i=2;a[i]!=0;i+=3)
        z=z+a[i];
    printf("%llu %llu %llu",x,y,z);

    return 0;
}
