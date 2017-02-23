#include <stdio.h>
 main()
{
   int a;
   float b;
   char c;
   printf("Enter those figures\n");
   printf ("a:");
   scanf ("%d",&a);
   printf ("b:");
    scanf ("%f",&b);
    printf ("c:");
    scanf ("%c",&c);
    printf("%d %f %c\n",a,b,c);
printf("%c %f %d\n",c,b,a);
printf("%c %d %f\n",c,a,b);
return 0;
}

   
