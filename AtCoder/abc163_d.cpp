#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

#define MOD 1000000007

int main()
{
    FAST_IO;

    ll n,k;
    cin>>n>>k;

    ll ans = 0;
    
    FOR (i,k,n+2)
    {
        ans += (i)*(n+1-i) + 1;
        ans = ans%MOD;
    }

    cout<<ans<<endl;
}
