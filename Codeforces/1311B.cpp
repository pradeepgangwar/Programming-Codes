#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

int main()
{
    ll t;
    cin>>t;

    while (t--)
    {
        ll n, m, a[200];
        bool p[200] = {false};

        cin>>n>>m;

        FOR (i,1,n+1)
        {
            cin>>a[i];
        }
        FOR (i,1,m+1)
        {
            ll x;
            cin>>x;
            p[x] = true;
        }
        
        bool ans = true;

        FOR (i,1,n+1)
        {
            FOR (j,1,n)
            {
                if (a[j] > a[j+1])
                {
                    if (!p[j])
                    {
                        ans = false;
                        break;
                    }
                    else
                    {
                        swap(a[j], a[j+1]);
                    }
                }
            }
            // FOR (k,1,n+1)
            // {
            //     cout<<a[k]<<" ";
            // }
            // cout<<endl;
            if (!ans)
            {
                break;
            }
        }

        if (ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}
