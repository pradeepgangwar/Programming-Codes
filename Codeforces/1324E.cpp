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
    ll n,h,l,r;
    cin>>n>>h>>l>>r;

    vector <ll> a(n);

    FOR(i,0,n)
    {
        cin>>a[i];
    }

    vector <vector <ll> > dp(n+1, vector <ll>(n+1, INT_MIN));
    dp[0][0] = 0;

    ll sum = 0;
    for (int i=0; i<n; i++)
    {
        sum += a[i];

        for (int j=0; j<=n; j++)
        {
            dp[i+1][j] = max(dp[i+1][j], dp[i][j] + ((sum-j)%h >=l && (sum-j)%h <= r));
            if (j<n) {
                dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j] + ((sum-j-1)%h >= l && (sum-j-1)%h <= r));
            }
        }
    }
    // cout<<"HI"<<endl;
    ll ans = INT_MIN;

    FOR(i,0,n+1)
    {
        if (dp[n][i] > ans)
        {
            ans = dp[n][i];
        }
    }

    cout<<ans<<endl;
}
