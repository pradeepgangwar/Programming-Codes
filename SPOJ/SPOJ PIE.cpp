#include<iostream>
using namespace std;

long double pi=3.14159265358979323846264338327950,area;

long double search_binary(int maxl,int n,int f)
{
    long double mid,l,r;
    int temp=100;
    l=0;r=maxl;
    while(temp--)
    {
        mid=(l+r)/2;
        if(pi*mid*mid*f==area)
            return mid;
        else if(pi*mid*mid*f<mid)
            l=mid+1;
        else
            r=mid;
    }
    return mid;
}

int mainn()
{
    int t,n,f,a[1000],maxl,i;
    long double l;
    cin>>t;
    while(t--)
    {
        cin>>n>>f;
        maxl=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            area+=pi*a[i]*a[i];
            if(a[i]>=maxl)
                maxl=a[i];
        }
        l=search_binary(maxl,n,f);
        cout<<l<<endl;
    }
    return 0;
}
