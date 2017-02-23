//codechef problem enormous data

#include<stdio.h>
int main()
{
    int a,b,c[10000010],n=0,i;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++)
        scanf("%d",&c[i]);
    for(i=0;i<a;i++)
    {
        if((c[i]%b)==0)
            n++;
    }
    printf("%d",n);
    return 0;
}
