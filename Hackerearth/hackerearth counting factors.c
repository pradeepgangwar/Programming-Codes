// counting factors b/w two numbers

#include<stdio.h>
int main()
{
    int a,b,c,n=0,i;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    for(i=a;i<=b;i++)
    {
        if(i%c==0)
            n++;
    }
    printf("%d",n);
 return 0;
}
