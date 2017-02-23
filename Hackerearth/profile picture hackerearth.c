//this is problem about profile picture on hackerearth

#include<stdio.h>
int main()
{
    int a,b,c[2000],n,i;
    scanf("%d",&a);
    scanf("%d",&n);
    for(i=0;i<2*n;i++)
        scanf("%d",&c[i]);
    for(i=0;i<2*n;i+=2)
    {
        if(c[i]<a||c[i+1]<a)
            printf("UPLOAD ANOTHER\n");
        else if(c[i]>=a&&c[i+1]>=a&&c[i]==c[i+1])
            printf("ACCEPTED\n");
        else if (c[i]>=a&&c[i+1]>=a&&c[i]!=c[i+1])
            printf("CROP IT\n");
    }
    return 0;
}
