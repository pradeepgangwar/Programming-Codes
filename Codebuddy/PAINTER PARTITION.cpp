#include<iostream>
#include<algorithm>
using namespace std;
typedef long long int ll;

ll check(ll a[],ll mid,ll n,ll k)
{
    ll painter=1,sum=0,i;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum>mid)
        {
            sum=a[i];
            painter++;
        }
    }
    if(painter>k)
        return 0;
    else
        return 1;
}

ll search_binary(ll a[],ll n,ll k,ll maxl,ll sum)
{
    ll l,r,mid;
    l=maxl;
    r=sum;
    while(r-l>1)
    {
        mid=(l+r)/2;
        l=check(a,mid,n,k);
        if(l==0)
            l=mid+1;
        else
            r=mid;
    }
    ll x=check(a,l,n,k);
    ll y=check(a,l,n,k);
    if(x==1)
        return l%10000003;
    else
        return r%10000003;
}

int main()
{
    ll a[100003],n,m,k,t,maxl,sum,i,l;
    
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>m;
        maxl=0;sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            
            if(a[i]>=maxl)
                maxl=a[i];
            sum+=a[i];
        }
        l=search_binary(a,n,k,maxl,sum);
        cout<<(m*l)%10000003<<endl;
    }
    return 0;
}