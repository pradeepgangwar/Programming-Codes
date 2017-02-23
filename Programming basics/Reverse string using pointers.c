#include<stdio.h>
#include<string.h>

int reverse(char *p,int a,int i)
//you can use other form of 2 d array (*p)[no. of coloumns] if you pass just a+i and read its value as *(*p+j)
{
    int temp;
    if(i<a/2)
        {
            temp=*(p+i);
            *(p+i)=*(p+a-i-1);
            *(p+a-i-1)=temp;

            return reverse(p,a,++i);
        }
    else
        return 0;
}
int main()
{
    char a[10][20];
    int i,j,n,p;

    printf("Enter the strings you want to enter...\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%s",&a[i]);

    printf("\nYour output is:...\n");

    for(i=0;i<n;i++)
    {
        p=0;
        reverse(*(a+i),strlen(a[i]),p);
    }

    for(i=0;i<n;i++)
        printf("%s\n",a[i]);

    return 0;

}

