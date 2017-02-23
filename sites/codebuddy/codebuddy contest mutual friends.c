#include <stdio.h>

int main() {

    long long int n,i,j=1,a,b,c,gcd,p=0,x,y;

    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        p=0;
        scanf("%lld %lld",&a,&b);
        x=a ; y=b;

        if(a>b){
            while(a%b!=0)
        {
            c=b;
            b=a%b;
            a=c;}
            gcd=b;
        }

        else if(a<b){
            while(b%a!=0)
        {
            c=a;
            a=b%a;
            b=c;}
            gcd=a;
        }
        else if(a==b)
            gcd=a;

          // printf("%d\n",gcd);
       j=1;

        while(j*j <= gcd)
    {
        if(gcd%j==0) {
          // printf("%d\n",j);
           p++;
        if (j != (gcd / j)) {
              //  printf("%d\n",gcd/j);
                p++;
            }}
            j++;
    }

    if(gcd==x||gcd==y)
    {
        p--;
    }

        printf("%lld\n",p);
    }

	return 0;
}
