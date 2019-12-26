#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

int main()
{
    IOS;

    ll t;
    cin>>t;

    while (t--)
    {
        ll n,p,k;
        ll goods[200006]={0};
        ll cs[200006]={0};

        cin>>n>>p>>k;
        for (int i=1; i<=n; i++)
        {
            cin>>goods[i];
        }
        sort(goods+1, goods+n+1);

        cs[0] = 0;

        for(int i=1; i<k; i++)
        {
            cs[i] += goods[i] + cs[i-1];
        }

        for (int i=k; i<=n; i++)
        {
            cs[i] = cs[i-k] + goods[i];
        }

        ll res=0;
        for (int i=1; i<=n; i++)
        {
            if (cs[i] <= p)
                res = i;
        }
        cout<<res<<endl;;

    }
}