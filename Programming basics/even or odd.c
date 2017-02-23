#include <stdio.h>
int main()
{
    int a,b,i,d,e;
    printf("Here we will print even or odd no. in between any two integers\n\n");
    printf("enter value of limit\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("What do you want to get: press '1' for even and press '2' for odd\n");
    scanf("%d",&e);
    if (e==1)
     {for (i=a;i<=b;i++)
         {
            d=i%2;
            if (d==0)
              printf("%d\n",i);
         }
     }
    else if (e==2)
        {for (i=a;i<=b;i++)
           {
            d=i%2;
            if (d!=0)
                printf("%d\n",i);
          }
        }
}
