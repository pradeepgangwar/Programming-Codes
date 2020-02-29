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
	int n;
  	cin>>n;
    
    int cost[100005][3];
    FOR(i,1,n+1)
    {
        cin>>cost[i][0]>>cost[i][1]>>cost[i][2];
    }

    int dp[100005][3];
    dp[1][0] = cost[1][0];
    dp[1][1] = cost[1][1];
    dp[1][2] = cost[1][2];
    FOR(i,2,n+1)
    {
        FOR(j,0,3)
        {
            dp[i][j] = max(dp[i-1][(j+1)%3]+cost[i][j], dp[i-1][(j+2)%3]+cost[i][j]);
        }
    }

    cout<<max(dp[n][0], max(dp[n][1], dp[n][2]))<<endl;
}
