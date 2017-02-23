// this is codechef problem snape and ladder

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b[2000],i;
    float f,g;
    scanf("%d",&a);
    for(i=0;i<2*a;i++)
        scanf("%d",&b[i]);
    for(i=0;i<2*a;i+=2)
    {
        f=sqrt((b[i+1]*b[i+1])-(b[i]*b[i]));
        g=sqrt((b[i+1]*b[i+1])+(b[i]*b[i]));

        printf("%.4f %.4f\n",f,g);
    }
    return 0;
}
