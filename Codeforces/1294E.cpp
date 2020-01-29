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
    FAST_IO;

    ll n,m;
    cin>>n>>m;

    ll a[n+2][m+2];
    ll temp_a;

    FOR(i,0,n)
    {
        FOR(j,0,m)
        {
            cin>>temp_a;
            a[i][j] = temp_a-1;
        }
    }

    ll ans=0;
    FOR(i,0,m)
    {
        ll temp = 0;
        ll mod = (i)%m;
        vector <ll> count(n);
        FOR(j,0,n)
        {
            if (a[j][i]%m == mod)
            {
                ll real_pos = floor(a[j][i]/m);
                ll shift = (j-real_pos+n)%n;
                if (real_pos < n)
                    count[shift]++;
            }
        }
        ll mini = INT_MAX;
        FOR(j,0,n)
        {
            mini = min(mini, n-count[j]+j);
        }
        ans+=mini;
    }

    cout<<ans<<endl;
}