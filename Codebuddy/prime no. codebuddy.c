//This is code on codebuddy to print no. of primes between two numbers.

#include<stdio.h>
int main()

{
    int a,b[20],i,j,k,p,n,m;

    scanf("%d",&a);
    for(i=0;i<a*2;i++)
        scanf("%d",&b[i]);
    for(i=0;i<a*2;i+=2)
    {   m=0;
        for(j=b[i];j<=b[i+1];j++)
        {   p=1;
            for(k=2;k<j;k++)
                 {
                  n=j%k;
                  if(n==0)
                    {p=0;
                    break;}
                 }
            if(p==1&&j!=1)
              m+=1;
        }
        printf("%d",m);
        printf("\n");
    }
return 0;
}
