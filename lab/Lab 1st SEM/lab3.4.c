//problem no.4 of lab 3

#include <stdio.h>
int main()

{
    int a[100],b,i,c,j,n=0;
    printf("enter number of elements in array:\n");
    scanf("%d",&b);

    printf("\nInput %d elements\n",b);
    for(i=0;i<b;i++)
       scanf("%d",&a[i]);

    printf("Enter the number you want to search for\n");
    scanf("%d",&c);

    for(j=0;j<b;j++)
       { if(c==a[j])
         {printf("The element %d is at location %d\n",c,j+1);
          n++;}
       }
       if (n==0)
        printf("no. not found");
}
