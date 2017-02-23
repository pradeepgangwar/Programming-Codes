#include<stdio.h>
int main()
{
    int a,i,j,k,n,p,m;
    long long int b[1000],c[100];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%lld",&b[i]);
    }
    for(i=0;i<a;i++)
    {   n=0;
        for(j=0;b[i]!=0;j++)
        {
            c[j]=b[i]%10;
            b[i]=b[i]/10;
            n++;
            m=n;
        }
        p=1;
        for(k=0;k<n;k++)
        {
            if(c[k]!=c[m-1])
                p=0;
                m--;
        }
        if(p==1)
        printf("Yes\n");

        else if (p==0)
        printf("No\n");

    }
    return 0;
}
