//here we will round off the three decimal digit to two decimal digit//
#include<stdio.h>
int main()
{

    int b,n,e,j,l;
    float a,t,k;
    printf("enter the number with three decimal=\n");
    scanf("%f",&a);
    b=a*1000;
    n=b%10;
    e=(n>=5&&n<=9);
    j=(n>=1&&n<5);
    l=a*100;
    t=(float)l/100;
    k=((t+0.01)*e + (t)*j);
    printf("%.2f",k);
    return 0;
}
