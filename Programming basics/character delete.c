#include<stdio.h>

void correct (char *p,char *q, char c)
{
    int i,j=0;
   // printf("%c",*(p+2));
    for(i=0;*(p+i)!='\0';i++)
    {
        if(*(p+i)!=c)
        {
            *(q+j)=*(p+i);
            j++;
        }
    }
    *(q+j)='\0';
}

int main()
{
    char a[100],b[100],c;
    scanf("%s",a);
    scanf("%s",&c);
    correct(&a[0],&b[0],c);
    printf("%s",b);
    return 0;
}
