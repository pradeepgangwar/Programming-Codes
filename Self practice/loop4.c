/*Here we will count the sum of digits and total digits in a number*/
#include<stdio.h>
int main()
{
    int a,b,e,c=0,s=0,l;
    printf("Enter any integer\n");
    scanf("%d",&a);
    b=a;

    while(a!=0)
    {
        a=a/10;
        c=c+1;
    }
    printf("The number of digits in %d is %d\n",b,c);
    e=b;

    while(b!=0)
    {
        l=b%10;
        b=b/10;
        s=s+l;
    }
    printf("The sum of all integers of the number %d is %d",e,s);
}
