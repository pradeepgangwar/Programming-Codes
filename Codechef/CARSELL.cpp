#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair
#define mod 1000000007

int main()
{
    int t;

    cin>>t;

    while (t--)
    {
        ll n, a[200009];
        cin>>n;

        FOR(i,0,n)
        {
            cin>>a[i];
        }

        sort(a, a+n, greater<ll>());

        ll ans = 0ll;
        FOR (i,0,n)
        {
            ans = (ans + max(0ll,(a[i]-i)))%mod;
        }

        cout<<ans<<endl;
    }
}
