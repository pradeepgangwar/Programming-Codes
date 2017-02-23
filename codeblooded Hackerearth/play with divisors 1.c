//codeblooded problem on hackerearth

#include<stdio.h>
int main()
{
    int n,a[102],count=0,i,j;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
       count=0;

       for(j=1;j<=a[i];j++)
        {
           if (a[i]%j==0)
             count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
