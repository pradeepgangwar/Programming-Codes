//Finding GCD of two number Ques no. 4 of lab 2

#include<stdio.h>
int main()
{
   int a,b,c,d,e,i;
   printf("Enter two numbers whose GCD you want to find our:\n");
   scanf("%d %d",&a,&b);
   if (a>=b)
     for(i=a;i>0;i--)
       {
           d=a%i;  e=b%i;
           if(d==0&&e==0)
           { printf("%d\n",i);
	   break;}
	}
	
	
	else if (b>a)
	for(i=b;i>0;i--)
         {  
                 d=a%i;  e=b%i;
	         if(d==0&&e==0)
		  {printf("%d\n",i);
		  break;}
	  }
		

}
