#include<stdio.h>
#define r 3
#define c 3

int add(int *p,int *q,int *w)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            *(w+i*c+j) = *(p+i*c+j) + *(q+i*c+j);
    }
}
int main()
{
    int a[r][c],b[r][c],d[r][c],*p,*q,*w,i,j;
    p=*a;
    q=*b;
    w=*d;
    printf("Enter matrix 1\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }

    printf("Enter matrix 2\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);
    }
    add(p,q,w);

    printf("Final matrix 3\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",d[i][j]);
        printf("\n");
    }

}
