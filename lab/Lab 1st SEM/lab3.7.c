//this is problem no. 7 of lab 3

#include <stdio.h>

int main()
{
   char a[103];
   int count=0,i,p=1,t;

   scanf("%d",&t);

   while(t--){
    p=1;
   count=0;
   scanf("%s",a);

   for(i=0;a[i]!='\0';i++)
     count++;

   for(i=0;i<count;i++)
    {
        if(a[i]!=a[count-i-1])
            p=0;
    }
   if(p==1)
     printf("YES\n");
   else
     printf("NO\n");
   }
    return 0;
}
