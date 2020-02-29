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
	ll n, w;
  	cin>>n>>w;

    ll val[110], weight[100007];
    FOR(i,1,n+1)
    {
        cin>>weight[i]>>val[i];
    }

    ll dp[100005] = {0};
    FOR(i,1,n+1)
    {
        FOR_REV(j,w,weight[i])
        {
            if (i==0 || j==0)
                dp[j] = 0;
            if (weight[i] <= j)
            {
                dp[j] = max((val[i]+dp[j-weight[i]]), dp[j]);
            }
        }
    }

    cout<<dp[w]<<endl;
}
