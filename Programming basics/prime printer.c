/*Here we will find all prime numbers between 1-n*/

#include<stdio.h>
int main()
{
    int a,b,e,s,i;
    printf("Enter the number you want to get all primes before n\n");
    scanf("%d",&a);
    printf("\n");
        for(i=2;i<a;i++)
        {
            e=0;
            for(s=2;s<i;s++)
          {
              b=i%s;
               if(b==0)
                 e=1;
          }
          if (e==0)
            printf("%3d\n",i);
         }

}
