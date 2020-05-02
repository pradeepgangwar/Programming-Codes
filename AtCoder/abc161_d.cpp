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
    ll k;
    cin>>k;

    queue <ll> q;

    FOR (i,1,10)
    {
        q.push(i);
    }

    ll x;

    while (k--)
    {
        x = q.front();
        q.pop();

        if (x%10 != 0)
        {
            q.push(10*x + (x%10 - 1));
        }

        q.push(10*x + (x%10));

        if (x%10 != 9)
        {
            q.push(10*x + (x%10 + 1));
        }
    }

    cout<<x<<endl;
}
