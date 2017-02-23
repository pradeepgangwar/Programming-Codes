//problem on codechef to calculate trailing zeroes of a number

#include<stdio.h>

check(int a)
{
  int j,b=0;
  while(a%5==0)
    {
        if(a%5==0)
        {
          b++;
          a/=5;
        }
    }
      return b;
}


int main()
{
    int a,b=0,i,x=0,c,d[100010],j;
    scanf("%d",&c);
    for(j=0;j<c;j++)
    {
        scanf("%d",&d[j]);
         x=0;
      for(i=5;i<=d[j];i+=5)
       {
        x=x+check(i);
       }
       printf("%d\n",x);
    }
}

