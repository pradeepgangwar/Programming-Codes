#include <bits/stdc++.h>
using namespace std;

#define MAX 100010

vector <int> adj[MAX];
int level[MAX];
int dp[MAX][30];

void preprocess(int n)
{
    for (int i = 0; i <= n; i++)
        for (int j = 0; (1<<j) <= n; j++)
            dp[i][j] = -1;
}

void processLCA(int n)
{
    for (int j = 1; (1<<j) <= n; j++)
        for (int i = 1; i <= n; i++)
            if (dp[i][j - 1] != -1)
                dp[i][j] = dp[dp[i][j - 1]][j - 1];
}

void dfs(int u, int p, int l)
{
    level[u] = l;
    dp[u][0] = p;

    for (auto it: adj[u])
    {
        if (it != p)
        {
            dfs(it, u, l+1);
        }
    }
}

int lca(int u, int v)
{
    if (level[v] < level[u])
        swap(u,v);

    int logv;

    for (logv=1; (1<<logv)<=level[v]; logv++);
    logv--;

    for (int i=logv; i>=0; i--)
    {
        if (level[v] - (1<<i) >= level[u])
        {
            v = dp[v][i];
        }
    }

    if (v == u)
        return v;
    
    for (int i=logv; i>=0; i--)
    {
        if (dp[v][i] != -1 && dp[v][i] != dp[u][i])
        {
            v = dp[v][i];
            u = dp[u][i];
        }
    }

    return dp[v][0];
}

int main()
{
    int n;
    cout<<"Number of nodes "<<endl;
    cin>>n;

    preprocess(n);

    int edges = n-1;
    for (int i=0; i<edges; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,-1,0);
    processLCA(n);

    while(true)
    {
        cout<<endl<<"Find LCA of "<<endl;
        int a,b;
        cin>>a>>b;
        cout<<lca(a,b)<<endl;
    }
}
