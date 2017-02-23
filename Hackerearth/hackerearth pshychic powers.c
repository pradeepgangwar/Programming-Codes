#include<stdio.h>
int main()
{
    int i,count=1;
    char a[102];
    scanf("%s",a);
    for(i=1;a[i]!='\0';i++)
    {
        if(count==6)
        {
            printf("Sorry, sorry!");
            break;
        }

        else if(a[i]==a[i-1])
            count++;

        else if (a[i]!=a[i-1])
            {
                count=0;
                count++;
            }
    }
    if(count!=6)
        {
           printf("GOOD LUCK!");
        }

    return 0;
}
