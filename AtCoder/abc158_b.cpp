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
    ll n,a,b;
    cin>>n>>a>>b;

    ll x = a+b;
    ll r;
    ll ans;
    r = floor(n/(double)x);
    ans = a*r;
    if (n%x < a)
    {
        ans += n%x;
    }
    else
    {
        ans += a;
    }
        
    cout<<ans<<endl;
}
