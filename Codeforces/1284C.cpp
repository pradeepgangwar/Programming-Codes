#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

ll fac[250009];

void precompute(ll mod)
{
    fac[0] = 1;
    for (int i=1; i<250004; i++)
        fac[i] = fac[i-1]*i%mod;
}

int main()
{
    FAST_IO;

    ll n,m;
    cin>>n>>m;

    precompute(m);
    ll ans=0;
    for (int i=1; i<=n; i++)
    {
        ans += (n-i+1)*((fac[i]*fac[n-i+1])%m);
        ans = ans%m;
    }

    cout<<ans<<endl;
}