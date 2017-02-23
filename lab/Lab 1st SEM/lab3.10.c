#include<stdio.h>
int main()
{
    int i,k,j,l,max=0,n,pos=0,a[100],b[100],m=0;
    printf("Enter the numbers of elements you want to enter=");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
                m+=1;
        }
        b[i]=m;
        m=0;
    }
    for(k=0;k<n;k++)
    {
        for(l=0;l<n;l++)
        {
            if(b[l]>=max)
            {max=b[l];
             pos=l;}
        }
    }
    printf("\n");
    printf("%d is most repeated element\n",a[pos]);
    return 0;
}
