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
  
    int a[200009];

    FOR (i,1,n+1)
    {
        cin>>a[i];
    }

    int dp[200009];

    dp[1] = 0;
    dp[2] = abs(a[2]-a[1]);
    FOR(i,3,n+1)
    {
        dp[i] = min(dp[i-1]+abs(a[i]-a[i-1]), dp[i-2]+abs(a[i]-a[i-2]));
    }

    cout<<dp[n]<<endl;
}
