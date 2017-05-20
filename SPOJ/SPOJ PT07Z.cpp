#include<bits/stdc++.h>
using namespace std;

vector <int> adj[20003];
int n,m,vis[20003]={0},ele,a,b,ans,d[20003],maxl,i,temp,next;
stack <int> s;

int dfs(int i)
{
    s.push(i);
    d[i] = 0;
    maxl = d[i];

    while(!s.empty())
    {
        ele = s.top();
        s.pop();
        vis[ele] = 1;
        for(i=0; i<adj[ele].size(); i++)
        {
            if(vis[adj[ele][i]] == 0)
            {
                s.push(adj[ele][i]);
                d[adj[ele][i]] = d[ele] + 1;
                if(d[adj[ele][i]] >= maxl)
                    {
                        maxl = d[adj[ele][i]];
                        next = adj[ele][i];
                    }
                vis[adj[ele][i]] = 1;
            }
        }
    }
    return maxl;
}

int main()
{
    scanf("%d",&n);
    temp = n-1;
    while(temp--)
    {
        scanf("%d %d",&a,&b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    ans = dfs(1);
    for(i=0;i<=n;i++)
        vis[i] = 0;
    ans = dfs(next);
    printf("%d",ans);
}
