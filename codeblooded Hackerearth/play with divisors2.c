//codeblooded problem on hackerearth

#include<stdio.h>
int main()
{
    long long int n,a[5009],count=0,i,j;

    scanf("%lld",&n);

    for(i=0;i<n;i++)
    {
       scanf("%lld",&a[i]);
       count=0;

       for(j=1;j<=a[i]/2;j++)
        {
           if (a[i]%j==0)
             count++;
        }
        printf("%lld\n",++count);
    }
    return 0;
}
