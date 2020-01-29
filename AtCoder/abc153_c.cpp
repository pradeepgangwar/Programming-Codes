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
	ll n,k;
    cin>>n>>k;

    ll a[200006];

    FOR(i,0,n)
    {
        cin>>a[i];
    }

    if (k>=n)
    {
        cout<<0<<endl;
        return 0;
    }
    else
    {
        sort(a,a+n, greater<ll>());
        ll sum = 0;
        FOR(i,k,n)
        {
            sum += a[i];
        }
        cout<<sum<<endl;
    }
}