/*Let us C 4 [b] a*/
#include<stdio.h>
main()
{
    int a,b,i=1;
    printf("Here we will calculate overtime pay for 10 employees\n\n");
    for(i=1;i<=10;i++)
    {
        printf("Employee No. %d\n",i);
        printf("No. of hours worked:");
        scanf("%d",&a);
        if (a>40)
         {
             b=12*(a-40);
             printf("Over Time pay:%d\n\n",b);
         }

        else
            printf("You are not eligible for overtime pay\nGood BYE\n\n");
    }

}
