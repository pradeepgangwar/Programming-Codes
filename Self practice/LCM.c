#include<stdio.h>
int main()

{
   int a,b[2002],i,j,k,c,d,temp;
   scanf("%d",&a);
   while(a>0)
   {

      {
       for(j=0;j<(a*2);j+=2)
        scanf("%d %d",&b[j],&b[j+1]);
      }
         for(k=0;k<(a*2);k+=2)
          {
              if(b[k]>b[k+1])
                temp=b[k];
              if(b[k]<b[k+1])
                temp=b[k+1];
                   {
                       for(i=temp;i>=temp;i++)
                    {
                          c=i%b[k];
                          d=i%b[k+1];
                          if(c==0&&d==0)
                           break;
                    }
                         printf("%d\n",i);

                   }

          }
          break;
   }
    return 0;

}
