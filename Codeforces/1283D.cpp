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
    FAST_IO;

    ll n,m, a[200009];
    cin>>n>>m;

    map <ll, ll> dis;
    queue <ll> bfs;
    FOR(i,0,n)
    {
        cin>>a[i];
        dis[a[i]] = 0;
        bfs.push(a[i]);
    }

    ll answer = 0;
    vector <ll> coordinates;

    while(!bfs.empty())
    {
        if (coordinates.size() == m)
            break;
        ll temp = bfs.front();
        bfs.pop();
        if (dis[temp] != 0)
        {
            answer += dis[temp];
            coordinates.pb(temp);
        }
        if (!dis.count(temp-1))
        {
            dis[temp-1] = dis[temp]+1;
            bfs.push(temp-1);
        }
        if (!dis.count(temp+1))
        {
            dis[temp+1] = dis[temp]+1;
            bfs.push(temp+1);
        }
    }
    cout<<answer<<endl;

    vector <ll> :: iterator it;
    it = coordinates.begin();

    for (; it != coordinates.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}