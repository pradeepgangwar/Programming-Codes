#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

const long long INF = 1e9;

vector <int> spell;
vector <int> cost;

int main()
{
    FAST_IO;
	int h,n;
    cin>>h>>n;

    int a,b;
    FOR(i,0,n)
    {
        cin>>a>>b;
        spell.pb(a);
        cost.pb(b);
    }

    int dp[10004];
    for(int i = 0; i <= 10001; i++){
        dp[i] = INF;
    }

    dp[h] = 0;

    for (int i=h; i>=0; i--)
    {
        for (int j=0; j<n; j++)
        {
            int x = max(0, i - spell[j]);
            // cout<<" x "<<x;
            dp[x] = min(dp[x], dp[i]+ cost[j]);
            // cout<<"val "<<dp[x];
        }
        // cout<<endl;
    }

    cout<<dp[0]<<endl;

}