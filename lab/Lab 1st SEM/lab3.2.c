//This is question no. 2 of lab 3

#include<stdio.h>
int main()

{
    int a[100],d,i,c=0;
    printf("Enter the number for which you want to print binary for:\n");
    scanf("%d",&d);
    for(i=0;d!=0;i++)
    {
        a[i]=d%2;
        d=d/2;
        c++;
    }
     for(i=0;i<c;i++)
       printf("%d",a[c-i-1]);
       printf("\n");
      return 0;
}
