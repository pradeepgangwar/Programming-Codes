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
    ll n;
    cin>>n;

    ll a[200009], b[200009];
    vector <ll> pos;

    FOR(i,0,n)
    {
        cin>>a[i];
    }
    FOR(i,0,n)
    {
        cin>>b[i];
        pos.pb(a[i] - b[i]);
    }

    sort(pos.begin(), pos.end());

    ll ans=0;

    FOR (i,0,n)
    {
        ll x = pos[i];
        if (x <= 0)
            continue;
        ll a = lower_bound(pos.begin(), pos.end(), -x+1) - pos.begin();

        ans += i-a;
    }
    cout<<ans<<endl;
}
