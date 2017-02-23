#include<iostream>
#include<algorithm>
using namespace std;

long long int a[1000009];
int main()
{
    long long int t,n,k,ans=0,i,j,x,y;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<=32;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if(1&(a[j]>>i))
                k++;
        }
        if(k==0)
            ans+=0;
        else
            ans+=(1<<i)*(1);
    }
    cout<<ans<<endl;
}
