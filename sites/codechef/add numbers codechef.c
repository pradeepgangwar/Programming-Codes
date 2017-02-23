//This is problem to add given two numbers on codechef

#include<stdio.h>
int main()
{
    int a,b[2000],c,i;
    scanf("%d",&a);
    for(i=0;i<a*2;i++)
        scanf("%d",&b[i]);
    for(i=0;i<a*2;i+=2)
    {
        c=b[i]+b[i+1];
        printf("%d",c);
        printf("\n");
    }
    return 0;
}
