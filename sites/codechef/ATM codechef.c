#include<stdio.h>

int main()
{
    int a;
    float d,c;

    scanf("%d",&a);
    scanf("%f",&d);

    if(a>0&&a<=2000&&d>=0&&d<=2000)
    {
        c=(d-(a+0.50));
        if((float)(a+0.50)>d||a%5!=0)
           printf("%.2f",d);
        else
           printf("%.2f",c);

    }
            return 0;

}
