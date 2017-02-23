#include<stdio.h>

int add(char *p,int l,int m)
{
    int i;
    *(p+l)=' ';
    for(i=0;i<m;i++){
      *(p+l+i+1)=*(p+30+i);vb hdhttlk,gyut eh xdfg jbnhkm,bf xcfhmxy g,ky yuk fuvtvryc5eycur6ito7inompoi;lhu lj khj g mb
    }
    return 0;
}


int main()
{
    char a[10][30],*p;
    int i,j,l=0,m=0;
    p=*a;
    printf("Enter the first string\n");
    for(i=0;i<2;i++)
       scanf("%s",a[i]);
    for(j=0;a[0][j]!='\0';j++)
        l++;
    for(j=0;a[1][j]!='\0';j++)
        m++;

    add(p,l,m);

    for(i=0;a[0][i]!='\0';i++)
        printf("%c",a[0][i]);
        printf("\n");


        printf("%d ",l);
        printf("%d\n",m);
        return 0;
}
