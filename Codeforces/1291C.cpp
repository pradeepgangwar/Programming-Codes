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
    int t;
    cin>>t;

    while(t--)
    {
	    ll n,m,k;
        cin>>n>>m>>k;

        ll a[10000];

        FOR(i,0,n)
        {
            cin>>a[i];
        }

        k = min(k,m-1);
        ll behind = n-m;
        ll before = m-1;

        ll ans = 0;
        FOR(i,0,k+1)
        {
            ll ans_local = INT_MAX;
            FOR(j,0,before-k+1)
            {
                ll x = max(a[i+j], a[i+j+behind]);
                ans_local = min(ans_local, x);
            }
            ans = max(ans_local, ans);
        }
        cout<<ans<<endl;
    }
}