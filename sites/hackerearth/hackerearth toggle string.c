//this is problem no. 7 of lab 3

#include <stdio.h>

int main()
{
   int i;
   char a[100];
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]>=65 && a[i]<=96)
        a[i]=a[i]+32;
       else
        a[i]=a[i]-32;
   }
  for(i=0;a[i]!='\0';i++)
     printf("%s",a[i]);

 return 0;
}
