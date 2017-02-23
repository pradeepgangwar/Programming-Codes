//this is problem no. 5 of lab 3

#include <stdio.h>

int main()
{
   int c, first, last, middle, n, search, array[100],a=0;

   printf("Enter number of elements\n");
   scanf("%d",&n);

   printf("Enter %d integers\n", n);

   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);

   printf("Enter value to find\n");
   scanf("%d", &search);

   first = 0;
   last = n - 1;
   middle = (first+last)/2;

   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;
      else if (array[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;

      middle = (first + last)/2;
      a++;
   }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", search);

   printf("The no. of comparisons are %d",a);
   return 0;
}
