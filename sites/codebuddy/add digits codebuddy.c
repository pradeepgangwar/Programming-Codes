//this is to add three digits of a number

#include<stdio.h>
int main()
{
    int a,b,c,d=0,i;
    scanf("%d",&a);
    for(i=0;a!=0;i++)
    {
        c=a%10;
        a=a/10;
        d+=c;
    }
    printf("%d",d);
    return 0;
}
