#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

#define MOD 1000000007

int main()
{
    FAST_IO;

    ll n;
    cin>>n;

    ll a[2004];

    FOR (i,0,n)
    {
        cin>>a[i];
    }

    ll dp[2001][2001];

    FOR (i,0,n)
    {
        FOR (j,0,n)
        {
            dp[i][j] = a[i]*(abs(j-i));
        }
    }

    ll ans = 0;

    FOR (i,0,n)
    {
        ll maxi = INT_MIN;
        FOR (j,0,n)
        {
            if (dp[j][i] > maxi)
            {
                maxi = dp[j][i];
            }
        }
        ans += maxi;
    }

    cout<<ans<<endl;
}
