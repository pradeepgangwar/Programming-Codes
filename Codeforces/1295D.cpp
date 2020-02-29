#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

#define MAX 200006

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a%b);
}

ll phi(ll n)
{
    ll res = n;

    for (ll i=2; i*i<=n; i++)
    {
        if (n%i == 0)
        {
            while (n%i == 0)
            {
                n = n/i;
            }
            res = res - (res/i);
        }
    }

    if (n>1)
    {
        res = res - (res/n);
    }

    return res;
}

int main()
{
    FAST_IO;

    ll t;
    cin>>t;

    while(t--)
    {
        ll a,m;
        cin>>a>>m;

        cout<<phi(m/(gcd(a,m)))<<endl;
    }
}