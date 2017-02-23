/*Here we will print all numbers between 1 to n*/
#include <stdio.h>
main()
{
    int i,a;
    printf("Enter any integer n to print integers between 1-n\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
        printf("\n%d\n",i);
}
