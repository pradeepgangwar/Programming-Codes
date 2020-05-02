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
    ll n,k;
    
    cin>>n>>k;

    ll x = n/k;

    ll a = abs(n-(k*x));
    ll b = abs(n-(k*(x+1)));
    ll c = abs(n-(k*(x-1)));

    ll ans = min(a,b);
    ans = min(ans,c);

    cout<<ans<<endl;
}