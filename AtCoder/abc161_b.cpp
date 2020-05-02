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
    ll n,m;
    cin>>n>>m;

    ll a[2009];
    ll votes = 0;

    FOR(i,0,n)
    {
        cin>>a[i];
        votes += a[i];
    }
    ll x = 4*m;

    ll limit = ceil(votes/(double)x);

    int count = 0;

    FOR (i,0,n)
    {
        if (a[i] >= limit)
        {
            count++;
        }
    }

    if (count >= m)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    
}