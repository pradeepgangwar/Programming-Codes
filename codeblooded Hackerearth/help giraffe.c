//codeblooded problem on hackerearth

#include<stdio.h>

int main()
{
    long long int n,b[200013],i,c,d,gcd,a;

    scanf("%lld",&n);

    for(i=0;i<n*2;i+=2)
        scanf("%lld %lld",&b[i],&b[i+1]);

    for(i=0;i<n*2;i+=2)
    {
        c=b[i]; d=b[i+1];

        if(b[i]>b[i+1]){
            while(b[i]%b[i+1]!=0)
        {
            a=b[i+1];
            b[i+1]=b[i]%b[i+1];
            b[i]=a;}
            gcd=b[i+1];
        }

        else if(b[i]<b[i+1]){
            while(b[i+1]%b[i]!=0)
        {
            a=b[i];
            b[i]=b[i+1]%b[i];
            b[i+1]=a;}
            gcd=b[i];
        }
        else if(b[i]==b[i+1])
            gcd=b[i];

         c=c/gcd;
         d=d/gcd;
         printf("%lld\n",c+d);
    }

   return 0;
}
