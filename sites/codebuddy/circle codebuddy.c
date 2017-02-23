//This is problem to check whether a point lies inside circle or not1

#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,e,distance,p,q,r;
    scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
    q=(d-b);
    r=(e-c);
    distance=sqrt((q*q)+(r*r));
    p=sqrt(a*a);
    if(distance<p)
        printf("IN");
    else if(distance==p)
        printf("ON");
    else
        printf("OUT");
    return 0;
}
