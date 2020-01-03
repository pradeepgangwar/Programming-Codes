#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

const int N = 500010;

vector <ll> graph[N];
bool visited[N];

void dfs(ll v, ll p = -1) {
	visited[v] = true;
	for (auto to : graph[v]) if (to != p) {
		if (!visited[to])
			dfs(to, v);
	}
}

int main()
{
    FAST_IO;

    ll n;
    scanf("%d", &n);

    pair <ll, ll> point[N];
	vector <pair <ll, ll> > line;

    FOR(i,0,n)
    {
        scanf("%d", &point[i].first);
        scanf("%d", &point[i].second);
        line.pb(mp(point[i].first,i));
        line.pb(mp(point[i].second,i));
    }
    sort(line.begin(), line.end());

    // ll cnt=0;
    // for(auto it: line)
    // {
    //     if (cnt >= n)
    //     {
    //         break;
    //     }
    //     if (active_points.count(it))
    //     {
    //         active_points.erase(it);
    //     }
    //     else
    //     {
    //         for(auto set_it: active_points)
    //         {
    //             if (set_it.first < point[it.second].second)
    //             {
    //                 graph[it.second].pb(set_it.second);
    //                 graph[set_it.second].pb(it.second);
    //                 cnt++;
    //             }
    //         }
    //         if (cnt >= n)
    //         {
    //             break;
    //         }
    //         active_points.insert(mp(point[it.second].second, it.second));
    //     }
    // }

    ll cnt = 0;
	set <pair <ll, ll> > active_points;

	for (auto it : line) {
		if (cnt >= n)
            break;
		if (active_points.count(it)) {
			active_points.erase(it);
		} else {
			for (auto set_it : active_points) 
            {
				if (set_it.first > point[it.second].second)
                    break;
				graph[it.second].pb(set_it.second);
				graph[set_it.second].pb(it.second);
				cnt++;
				if (cnt >= n)
                    break;
			}
			active_points.insert(mp(point[it.second].second, it.second));
		}
	}

    dfs(0);
	puts(cnt == n - 1 && count(visited, visited + n, 1) == n ? "YES" : "NO");
}