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
	int n,k;
  	cin>>n>>k;
    
    int a[200009];
    FOR(i,1,n+1)
    {
        cin>>a[i];
    }

    vector <int> dp(n+3, INT_MAX);

    dp[1] = 0;

    FOR(i,1,n+1)
    {
        FOR(j,0,k+1)
        {
            if (i+j <= n)
                dp[i+j] = min(dp[i+j], dp[i]+abs(a[i]-a[i+j]));
        }
    }

    cout<<dp[n]<<endl;
}
