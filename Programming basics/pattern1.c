//floyedd triangle

#include<stdio.h>
int main()
{
    int i,j,c=1,k=1;
    for(i=1;i<=10;i++)
    {
        for (j=k;j>0;j--)
       {
           printf(" %2d ",c);
           c++;
       }
          k++;
          printf("\n");
    }
}
