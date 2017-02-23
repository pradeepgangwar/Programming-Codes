/*Here we will find whether a number is prime or not*/

#include<stdio.h>
int main()
{
    int a,b,c=0,d,i;
    printf("Enter the number you want to check for prime\n");
    scanf("%d",&a);

        for(i=2;i<a;i++)
       {
           b=a%i;
            if(b==0)
            d=b;
       }
       if (d==0)
        printf("Not prime\n");
       else
        printf("prime\n");
/*final edit to shorten program after it was working- removed "if (b!=0)
            c=b+c;" after b=a%i*/
}
