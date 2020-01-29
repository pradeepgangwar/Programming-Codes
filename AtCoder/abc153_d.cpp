#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

ll power(ll x, ll y) 
{ 
    ll res = 1;
   
    while (y > 0) 
    { 
        if (y & 1) 
            res = res*x; 
   
        y = y>>1;
        x = x*x;
    } 
    return res; 
}

int main()
{
    FAST_IO;
	ll n;
    cin>>n;

    ll x = floor(log2(n));

    ll ans = 0;

    FOR(i,0,x+1)
    {
        ans += power(2,i);
    }
    cout<<ans<<endl;
}