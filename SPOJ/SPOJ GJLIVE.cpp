#include<bits/stdc++.h>
using namespace std;
 
#define s(a) scanf("%d",&a)
#define p(a) printf("%d",a)
 
int main()
{
    int a[12],i,sum=0,l,r;
    for(i=0;i<10;i++)
        s(a[i]);
    for(i=0;i<10;i++)
    {
        //p(a[i]);
        sum = sum + a[i];
        if(sum >= 100)
        {
            r = abs(100 - sum);
            l = abs(100 - sum + a[i]);
            if(l < r)
                sum = sum - a[i];
            else if(l >= r)
                sum = sum;
            break;
        }
    }
    p(sum);
}
