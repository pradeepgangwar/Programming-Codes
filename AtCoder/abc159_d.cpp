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

    ll a[200008];
    map <ll, ll> cnt;
    
    FOR (i,0,n)
    {
        cin>>a[i];
        cnt[a[i]]++;
    }

    map <ll, ll> :: iterator it;
    ll sum = 0;

    for (it=cnt.begin(); it!= cnt.end(); it++)
    {
        if (it->second >= 2)
        {
            ll x = it->second;
            sum += x*(x-1)/2;
        }
    }

    for (ll i=0; i<n; i++)
    {
        ll ans = sum;
        ll x = cnt[a[i]];
        ans -= x*(x-1)/2;
        x--;
        if (x >= 2)
        {
            ans += x*(x-1)/2;
        }
        cout<<ans<<endl;
    }
}
