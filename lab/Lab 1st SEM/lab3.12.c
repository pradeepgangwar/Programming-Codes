#include<stdio.h>
int main()
{
   int a,i,t=0;
   char b[100],c[100];
   printf("Enter Two names in small letters\n");
   scanf("%s",b);
   scanf("%s",c);
   for(i=0;b[i]!='\0'||c[i]!='\0';i++)
    {
       if(b[i]<c[i])
         {printf("%s\n%s\n",b,c);
          break;}   
       if(b[i]>c[i])
         {printf("%s\n%s\n",c,b);
          break;}
       if(b[i]=c[i])
         {printf("%s\n%s\n",b,c);
          continue;}              
    } 
  
   return 0;
}
