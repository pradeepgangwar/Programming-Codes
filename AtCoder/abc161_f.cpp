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
    ll n;
    cin>>n;

    if (n == 2)
    {
        cout<<1<<endl;
        return 0;
    }

    ll ans = 2;

    // Checking for N-1
    for (ll i=2; i*i<=n-1; i++)
    {
        if ((n-1)%i == 0)
        {
            ans += 2;
        }
        if (i*i == n-1)
        {
            ans--;
        }
    }

    //Check for N
    for (ll i=2; i*i<=n; i++)
    {
        if (n%i == 0)
        {
            ll x = n;
            while (x%i == 0)
            {
                x = x/i;
            }
            if (x%i == 1)
            {
                ans += 1;
            }

            x = n;
            ll d = n/i;
            if (i*i != n)
            {
                while (x%d == 0)
                {
                    x = x/d;
                }
                if (x%d == 1)
                {
                    ans += 1;
                }
            }
        }
    }

    cout<<ans<<endl;

}
