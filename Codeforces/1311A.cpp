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
    ll t;
    cin>>t;

    while (t--)
    {
        ll x, y;
        cin>>x>>y;

        if (x == y)
        {
            cout<<0<<endl;
        }
        else if (x < y)
        {
            if ((y-x)%2 == 0)
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
        else
        {
            if ((x-y)%2 == 0)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }
    }
}
