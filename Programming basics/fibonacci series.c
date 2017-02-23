//Here we will print Fibonacci series//
#include<stdio.h>
int main()
{
    int a,b,c,d,n;
    printf("Enter any number till which you want to print Fibonacci series:");
    scanf("%d",&n);
    printf("The Fibonacci series is:\n");
    printf("%d %d ",0,1);
    b=1;a=0;
    while(b<=n)
        {
            c=a+b;
            d=b+c;
                    if(d>n&&c>n)                 //the part here is only to get input till n otherwise main execution of arithmetic has been done in part other than if else//
                           break;
                    else if (d>n&&c<n)
                         {
                            printf("%d",c);
                            break;
                         }
            printf("%d %d ",c,d);
            a=c;
            b=d;
        }
        return 0;
}
