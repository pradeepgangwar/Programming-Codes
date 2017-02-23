/*Here we will print reverse a number*/
#include<stdio.h>
#include<math.h>
main()
{
    int a,b,n=0,i,c,e,f;
    printf("Enter any number:");
    scanf("%d",&a);
    e=a;

    while(a!=0)
    {
        c=a%10;
        a=a/10;
        n+=1;
    }
    printf("The number of digit in the integer are %d\n\n",n);

    f=0;
    for(i=n;i>0;i--)
    {
        b=e%10;
        e=e/10;
        f+=(b*(pow(10,i-1)));
    }
    printf("And the reverse of the number is %d\n",f);
}
