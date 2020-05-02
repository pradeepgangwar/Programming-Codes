#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

ll n;
ll BIT1[200007];
ll BIT2[200007];

void update(ll BIT[], ll pos, ll val)
{
    for (++pos; pos<=n; pos+=pos&-pos)
    {
        BIT[pos] += val;
    }
}

ll query(ll BIT[], ll pos)
{
    ll sum = 0;
    for (; pos>0; pos-=pos&-pos)
    {
        sum += BIT[pos];
    }

    return sum;
}

int main()
{
    cin>>n;

    ll a[200006];
    vector <pair <ll, ll>> points;
    vector <ll> v;

    FOR (i,0,n)
    {
        cin>>a[i];
    }

    FOR (i,0,n)
    {
        ll vel;
        cin>>vel;
        points.pb(mp(a[i], vel));
        v.pb(vel);
    }

    sort(points.begin(), points.end());
    sort(v.begin(), v.end());

    ll ans = 0;
    for (int i=0; i<n; i++)
    {
        ll x = lower_bound(v.begin(), v.end(), points[i].second) - v.begin();
        cout<<query(BIT1,x+1)<<" "<<points[i].first<<" "<<query(BIT2,x+1)<<endl;
        ans += query(BIT1,x+1)*points[i].first - query(BIT2,x+1);
        update(BIT1, x, 1);
        update(BIT2, x, points[i].first);
    }
    
    cout<<ans<<endl;
}
