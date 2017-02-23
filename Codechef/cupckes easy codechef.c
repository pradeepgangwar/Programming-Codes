#include<stdio.h>
int main()

{
   int n,a[1000],i;
   scanf("%d",&n);
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
      while(a[i]>1)
      {
         printf("%d\n",(1+(a[i]/2)));
         break;
      }
    }
   return 0;
}
}
