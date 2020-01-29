#include <bits/stdc++.h>
using namespace std;

#define SIZE 100
vector <pair<int, int>> V[SIZE];
vector <int> dist(SIZE, INT_MAX);

void dijkstra(int src)
{
    priority_queue <pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
    pq.push(make_pair(0,src));

    dist[src] = 0;

    while(!pq.empty())
    {
        pair <int,int> x;
        x = pq.top();
        pq.pop();

        for (int i=0; i<V[x.second].size(); i++)
        {
            int a = V[x.second][i].first;
            int w = V[x.second][i].second;

            if (dist[x.second] + w < dist[a])
            {
                pq.push(make_pair(w,a));
                dist[a] = dist[x.second]+w;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;

    int e;
    cin>>e;

    int w,x,y;
    for (int i=0; i<e; i++)
    {
        cin>>w>>x>>y;
        V[x].push_back(make_pair(y,w));
        V[y].push_back(make_pair(x,w));
    }

    dijkstra(0);

    cout<<"Distance of vertex from src 0"<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<i<<' '<<dist[i]<<endl;
    }
}