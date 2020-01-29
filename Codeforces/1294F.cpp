#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

#define MAX 200006

vector <ll> graph[MAX];
ll par[MAX];

ll dfs(ll a)
{
    ll depth = INT_MIN;
    stack <pair<ll,ll>> nodes;
    bool vis[MAX] = {false};
    nodes.push(make_pair(0,a));
    ll res;
    par[a] = -1;

    while(!nodes.empty())
    {
        ll d = nodes.top().first;
        ll x = nodes.top().second;
        if (d>depth)
        {
            depth = d;
            res = x;
        }
        vis[x] = true;
        nodes.pop();

        for(auto to: graph[x])
        {
            if (!vis[to])
            {
                par[to] = x;
                nodes.push({d+1,to});
            }
        }
    }

    return res;
}

int main()
{
    FAST_IO;

    ll n;
    cin>>n;

    FOR(i,0,n-1)
    {
        ll a,b;
        cin>>a>>b;

        graph[a].pb(b);
        graph[b].pb(a);
    }

    memset(par, 0, sizeof(par));

    ll x = dfs(1);
    ll y = dfs(x);

    // for(int i=1; i<=n; i++)
    // {
    //     cout<<par[i]<<" ";
    // }
    // cout<<endl;

    vector <ll> diameter;

    while(y != x)
    {
        diameter.pb(y);
        y = par[y];
    }
    diameter.pb(y);

    if (diameter.size() == n)
    {
        cout<<diameter.size()-1<<endl<<diameter[0]<<" "<<diameter[1]<<" "<<diameter.back()<<endl;
    }
    else
    {
        queue <ll> q;
        vector <ll> d(n+2, -1);

        for (auto it: diameter)
        {
            d[it] = 0;
            q.push(it);
        }

        while(!q.empty())
        {
            int z = q.front();
            q.pop();

            for (auto to: graph[z])
            {
                if (d[to] == -1)
                {
                    d[to] = d[z]+1;
                    q.push(to);
                }
            }
        }

        pair <ll,ll> maxi = make_pair(d[1], 0);

        for (int i=1; i<=n; i++)
        {
            maxi = max(maxi, {d[i],i});
        }

        cout<<int(diameter.size())-1+maxi.first<<endl<<diameter[0]<<" "<<diameter.back()<<" "<<maxi.second<<endl;
    }
}