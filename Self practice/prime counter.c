/*Here we will count no. of primes between 1-n*/
#include<stdio.h>
int main()
{
    printf("Enter number for which you want to print primes before that number:\n");
    int a,count,b,f,j,i;
    count=0;
    scanf("%d",&a);
    printf("\n");
    for(i=2;i<a;i++)
    {
        f=0;

        for (j=2;j<i;++j)
        {
             b=i%j;
            if(b==0)
                {f=1;}
        }
    if(f==0)
       count++;
    }
    printf ("%d",count);
}
