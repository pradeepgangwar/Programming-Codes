#include<stdio.h>
int main()
{
    int i,k,t=0,e,s,b,a,n,c[100];
    scanf("%d",&n);
    printf("\n");

      for(i=2;t<n;i++)
        {
            e=0;
            for(s=2;s<i;s++)
          {
              b=i%s;
               if(b==0)
                 e=1;
          }
          if (e==0)
          {
           c[t]=i;
           t++;
          }
   }
   for(k=0;k<n;k++)
    printf("%d\n",c[k]);
}
