#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

const ll INF = 2e16;

ll dist(pair<ll,ll> p1, pair<ll,ll> p2)
{
    return abs(p1.first-p2.first)+abs(p1.second-p2.second);
}

int main()
{
    FAST_IO;

    ll x,y,ax,ay,bx,by;
    cin>>x>>y>>ax>>ay>>bx>>by;

    vector <pair <ll,ll>> nodes;
    nodes.pb(mp(x,y));

    while(x<=INF && y<=INF)
    {
        x = ax*x+bx;
        y = ay*y+by;
        nodes.pb(mp(x,y));
    }

    ll xs,ys,t;
    cin>>xs>>ys>>t;

    ll ans = 0;

    for (ll i=0; i<nodes.size(); i++)
    {
        for (ll j=i; j<nodes.size(); j++)
        {
            ll d = dist(nodes[i],nodes[j]);
            ll d1 = dist(mp(xs,ys), nodes[i]);
            ll d2 = dist(mp(xs,ys), nodes[j]);

            if (d+d1<=t || d+d2<=t)
            {
                ans = max(ans, j-i+1);
            }
        }
    }
    cout<<ans<<endl;
}