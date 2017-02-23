#include<bits/stdc++.h>
using namespace std;

int check(int mid,int x[],int c,int n)
{
    int countl=1,i,curr=x[0];
    for(i=1;i<n;i++)
    {
        if(x[i]-curr>=mid)
            {countl++;curr=x[i];}
        if(countl==c)
            return 1;
    }
    return 0;
}

int binary_sea(int l,int r,int n,int c,int x[])
{
    int mid,e;
    while((r-l)>1)
    {
        mid=(l+r)/2;
        //cout<<"mid= "<<mid<<"l= "<<l<<"r= "<<r<<endl;
        e=check(mid,x,c,n);
        if(e==0)
        {
            r=mid-1;
        }
        else
            l=mid;
        //cout<<"mid= "<<mid<<"l= "<<l<<"r= "<<r<<endl;
    }
    int q=check(l,x,c,n);
    int w=check(r,x,c,n);
    if(w==1)
        return r;
    else
        return l;
}

int main()
{
    int n,c,x[10000],t,i,l,r,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        for(i=0;i<n;i++)
            cin>>x[i];
        sort(x,x+n);
        l=0;
        r=x[n-1]-x[0];

        ans=binary_sea(l,r,n,c,x);
        cout<<ans<<endl;
    }
}
