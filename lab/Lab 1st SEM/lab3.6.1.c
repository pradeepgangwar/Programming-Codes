//this is problem is same as no. 6 of lab 3 but prints in ascending order

#include <stdio.h>
 
int main()
{
   int a,b,d[100],i,j,n=0,new,pos,temp=0;
   printf("enter the number of elements in array:\n");
   scanf("%d",&a);
   printf("Input %d elements\n",a);
   for(i=0;i<a;i++)
      scanf("%d",&d[i]);
printf("\n");

for (i=0;i<a;i++)
{ pos=i;temp=d[i];
  for(j=i;j<a;j++)
    {
     if(d[j]<temp)
       {temp=d[j];
         pos=j;}
    }
   new=d[i];
   d[i]=d[pos];
   d[pos]=new;
printf("%d\n",temp);
}
 return 0;   
}
