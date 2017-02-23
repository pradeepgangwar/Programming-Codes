/*Here we will print table of a number*/
#include<stdio.h>
main()
{
    int i,a,l;
    printf("Enter any integer for which you want to print table\n");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
        {l=a*i;
        printf("%d*%d=%d\n",a,i,l);}
}
