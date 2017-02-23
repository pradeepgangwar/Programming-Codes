//This is ques 1 of lab 2

#include<stdio.h>
int main()

{
   int a,i,p,b,d=2;
   printf("Enter the numbers you want to print\n");
   scanf("%d",&a);
   printf("%d\n",d);
   for (i=2;i<a;i++)
      {for(p=2;p<i;p++)
           {b=i%p;
	   if (b==0)
	   break;
	   }
	     
	   {  if(b!=0)
	     printf("%d\n",i);
	   }
      }	
	return 0;
}

