//problem no.1 of lab 3

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()

{
    int a,b,i,r[100],temp,k;
    printf("Enter the number of integers you want to compare: ");
    scanf("%d",&a);

srand(time(NULL));
   for(i=0;i<a;i++)
      {

       r[i] = rand()%100;

       printf("%d\n",r[i]);
      }


    temp=r[0];
    for(k=0;k<a;k++)
       {
        if(r[k]>temp)
          temp=r[k];
       }
          printf(" max no is %d\n",temp);

    temp=r[0];
    for(k=0;k<a;k++)
       {
        if(r[k]<temp)
          temp=r[k];
       }
          printf(" min no is %d\n",temp);

          return 0;
}
