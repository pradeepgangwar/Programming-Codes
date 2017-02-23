/*Here we will print factorial of a number*/
#include<stdio.h>
int main()
{
long long int a,b=1,i=1;
printf("Enter the number whose factorial you want to print\n");
scanf("%lld",&a);
while(i<=a)
{
    b=b*i;
    i++;
}
printf("The factorial of %d is %lld",a,b);
}

