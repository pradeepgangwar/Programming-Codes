#include<stdio.h>
int main()
{
    int b,i,k=0;
    char a[20];
    scanf("%s %d",a,&b);

    for(i=0;k<b;i++)
    {
        if(a[i]!=57){
            a[i]=57;k++;}
    }
    for(i=0;a[i]!='\0';i++)
     printf("%d",a[i]-48);

    return 0;
}
