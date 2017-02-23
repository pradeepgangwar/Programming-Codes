//here we will solve ques no. 3 of lab 2

#include<stdio.h>
int main()

{

   int i,a,j=1,c=1;
   printf("Enter the number till which you want to print floyd triangle:");
   scanf("%d",&a);
   printf("\n");
   for (i=1;i<a;i++)
          {
              printf("%d ",c);

              if(c==(j*(j+1))/2)
                {
                    printf("\n");
                    j++;
                }
                c++;
          }
}
