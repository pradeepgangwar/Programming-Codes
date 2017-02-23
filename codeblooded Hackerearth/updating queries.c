//this is codeblood problem of hackerearth

#include<stdio.h>

int main()
{
    long long int n,a[100002],temp[100002]={0},i,m,l,r,v;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    scanf("%lld",&m);
    for(i=0;i<m;i++)
       {
        scanf("%lld %lld %lld",&l,&r,&v);
        temp[l-1]+=v;
        temp[r]-=v;
       }
     for(i=0;i<n;i++)
       temp[i]=temp[i-1]+temp[i];

    for(i=0;i<n;i++)
     printf("%lld ",temp[i]+a[i]);

        return 0;
}
Language: C
