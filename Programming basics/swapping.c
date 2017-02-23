#include <stdio.h>
int main()
{
    int a,b;
    int temp;
    printf("Here we will swap two integers after taking inputs\n");
    printf("Enter First number:");
    scanf("%d",&a);
    printf("Enter Second number:");
    scanf("%d",&b);
    printf("\nBefore swapping: a=%d, b=%d\n\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping: a=%d, b=%d",a,b);
    return 0;
}
