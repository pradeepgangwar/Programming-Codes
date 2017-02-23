# include <stdio.h>
main ()
{
    int input1, input2, sum;
    printf("enter the integers of your choice to be added\n");
    scanf("%d %d", &input1, &input2);
    sum = input1+input2;
printf ("%d+%d=%d\n", input1, input2, sum);
return 0;
}
