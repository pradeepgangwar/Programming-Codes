#include <stdio.h>
int main()
{
int a,b,c,d;
printf("Here we will find result on division of two numbers:\n\n");
printf("Enter Dividend:\n");
scanf("%d",&a);
printf("Enter Divisor\n");
scanf("%d",&b);
c= a/b;
d= (a-(c*b));
printf("quotient is %d and remainder is %d\n",c,d);
return 0;
}
