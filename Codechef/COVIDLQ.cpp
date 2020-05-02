#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair
#define mod 1000000007

int main()
{
    ll t;
    cin>>t;

    while (t--)
    {
        ll n, a[209];
        cin>>n;

        FOR (i,0,n)
        {
            cin>>a[i];
        }

        bool valid = true;
        int last_seen = -1;
        FOR (i,0,n)
        {
            if (last_seen != -1 && a[i] == 1)
            {
                if (i - last_seen < 6)
                {
                    valid = false;
                    break;
                }
            }
            if (a[i] == 1)
            {
                last_seen = i;
            }
        }

        if (valid)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
