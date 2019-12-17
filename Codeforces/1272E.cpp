#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

vector <vector <int> > g(200009);
vector <int> ans(200009, -1);

void multi_source_bfs(vector <int> start, vector <int> end)
{
    vector <int> dis(200009, INF);
    queue <int> q;

    for (int i=0; i<start.size(); i++)
    {
        dis[start[i]] = 0;
        q.push(start[i]);
    }

    while (!q.empty())
    {
        int v = q.front();
        q.pop();

        for (int i=0; i<g[v].size(); i++)
        {
            if (dis[g[v][i]] == INF)
            {
                dis[g[v][i]] = dis[v] + 1;
                q.push(g[v][i]);
            }
        }
    }

    for (int i=0; i<end.size(); i++)
    {
        if (dis[end[i]] != INF)
        {
            ans[end[i]] = dis[end[i]];
        }
    }
}

int main()
{
    int n;
    vector <int> a(200009);
    vector <int> even;
    vector <int> odd;

    cin>>n;

    for (int i=1; i<=n; i++)
    {
        cin>>a[i];
        if (a[i]%2 == 0)
        {
            even.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
        int left = i - a[i];
        int right = i + a[i];

        if (left >= 1) g[left].push_back(i);
        if (right <= n) g[right].push_back(i);
    }

    // cout<<"The graph is: "<<endl;
    // for (int i=1; i<=n; i++)
    // {
    //     for (int j=0; j<g[i].size(); j++)
    //     {
    //         cout<<g[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<"The even is"<<endl;
    // for (int i=0; i<even.size(); i++)
    // {
    //     cout<<even[i]<<" ";
    // }
    // cout<<endl;

    // cout<<"The odd is"<<endl;
    // for (int i=0; i<odd.size(); i++)
    // {
    //     cout<<odd[i]<<" ";
    // }
    // cout<<endl;

    multi_source_bfs(odd, even);
    multi_source_bfs(even, odd);

    for (int i=1; i<=n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}