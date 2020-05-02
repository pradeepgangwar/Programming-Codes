#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

ll dp1[200009];
ll dp2[200009];
ll a[200009];
ll n;
vector <vector <ll>> adj(200009);

void dfs1(ll n=1, ll parent=0)
{
    dp1[n] = a[n] == 1 ? 1 : -1;

    for (auto x: adj[n])
    {
        if (x == parent)
        {
            continue;
        }

        dfs1(x, n);
        dp1[n] += max(0ll,dp1[x]);
    }
}

void dfs2(ll n=1, ll parent=0)
{
    dp2[n] = dp1[n];

    if (parent)
    {
        ll val = dp2[parent] - max(0ll, dp1[n]);
        dp2[n] += max(0ll, val);
    }

    for (auto x: adj[n])
    {
        if (x == parent)
        {
            continue;
        }

        dfs2(x, n);
    }
}

int main()
{
    FAST_IO;

    cin>>n;

    FOR(i,1,n+1)
    {
        cin>>a[i];
    }

    ll u,v;

    FOR(i,0,n-1)
    {
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    dfs1();
    dfs2();

    FOR(i,1,n+1)
    {
        cout<<dp2[i]<<" ";
    }
    cout<<endl;

}
