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
        ll goods[200006];
        ll cs[200006];

        cin>>n>>p>>k;
        for (int i=0; i<n; i++)
        {
            cin>>goods[i];
        }
        sort(goods, goods+n);
        cs[0] = goods[0];
        cs[1] = goods[1];
        for (int i=2; i<n; i++)
        {
            cs[i] = goods[i] + cs[i-2];
        }

        ll res=0;
        for (int i=0; i<n; i++)
        {
            if (cs[i] <= p)
                res = i+1;
        }
        cout<<res<<endl;;
        
    }
}