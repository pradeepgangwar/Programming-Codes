#include<bits/stdc++.h>
using namespace std;

int binary_sea(int a[],int n,int k)
{
    int l=0;int r=n-1;int mid;
    while((r-l)>1)
    {
        mid=(l+r)/2;
        if(a[mid]==k)
            return 1;
        else if(a[mid]>k)
            r=mid-1;
        else
            l=mid+1;
    }
    return 0;
}

int main()
{
    int t,n,a[100],s[100]={0},p,i,j,l,flag=0;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        cin>>p;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                l=binary_sea(a,n,p-a[i]-a[j]);
            if(l==1)
            {flag=1;break;}
        }
        if(flag==0)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
}

