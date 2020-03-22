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
    ll a,b;
    cin>>a>>b;

    ll x1 = floor(a/0.08);
    ll x2 = floor(b/0.10);

    // cout<<x1<<" "<<x2<<endl;

    bool found = false;

    ll l,r;
    if (x1<x2)
    {
        l = x1-100;
        r = x2+100;
    }
    else
    {
        l = x2-100;
        r = x1+100;
    }
    
    int i = l;
    for (; i<=r; i++)
    {
        // cout<<floor(i*0.08)<<" "<<floor(i*0.10)<<endl;
        if (floor(i*0.08) == a && floor(i*0.10) == b)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout<<i<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}
