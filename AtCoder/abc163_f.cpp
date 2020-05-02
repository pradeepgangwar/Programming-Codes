/*************************/




// Incomplete ..... See tutorial




/************************/


#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

vector <vector<ll>> paths;

void findAllPaths(vector <ll> tree[], ll root, vector <ll>& tempPath, vector <bool>& visited)
{
    tempPath.pb(root);
    visited[root] = true;

    // Child node
    // if (tree[root].size() == 0)
    // {
    //     paths.pb(tempPath);
    //     tempPath.pop_back();
    //     visited[root] = false;
    //     return;
    // }
    int child = 0;
    for (auto x: tree[root])
    {
        if (!visited[x])
        {
            findAllPaths(tree, x, tempPath, visited);
            child++;
        }
        // tempPath.pop_back();
    }
    if (!child)
    {   
        paths.pb(tempPath);
        tempPath.pop_back();
        visited[root] = false;
    }
}

int main()
{
    FAST_IO;

    ll n;
    vector <ll> tree[200009];

    cin>>n;
    vector <ll> colors(n+2);
    FOR (i,1,n+1)
    {
        ll x;
        cin>>x;
        colors[i] = x;
    }

    FOR(i,0,n-1)
    {
        ll a,b;
        cin>>a>>b;
        tree[a].pb(b);
        tree[b].pb(a);
    }

    vector<ll> tempPath;
    vector <bool> visited(n+2, false);

    findAllPaths(tree, 1ll, tempPath, visited);

    map <ll, ll> count;

    for (int i=0; i<paths.size(); i++)
    {
        int s = paths[i].size();
        vector <ll> x(n+1, -1);
        for (int j=0; j<s; j++)
        {
            x[colors[paths[i][j]]]++;
            count[colors[paths[i][j]]] += s - j;
            count[colors[paths[i][j]]] += j - 0;
            count[colors[paths[i][j]]] -= x[colors[paths[i][j]]];
            if (!(j==0 || j==s-1))
            {
                count[colors[paths[i][j]]]++;
            }
        }
    }

    for (int i=0; i<paths.size(); i++)
    {
        int s = paths[i].size();
        for (int j=0; j<s; j++)
        {
            cout<<paths[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int i=1; i<=n; i++)
    {
        if (count.find(i) == count.end())
            cout<<0<<endl;
        else
        {
            cout<<count[i]<<endl;
        }
        
    }
}
