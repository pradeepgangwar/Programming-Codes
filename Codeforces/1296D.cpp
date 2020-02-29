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
    int n,a,b,k;
    cin>>n>>a>>b>>k;

    int mons[n+3];
    FOR(i,0,n)
    {
        cin>>mons[i];
    }

    int power = a+b;
    vector <pair <int, int>> rem;

    int points = 0;

    FOR(i,0,n)
    {
        int left = mons[i]%power;
        int turns = mons[i]/power;

        if (left == 0)
        {
            if (b%a == 0)
            {
                rem.pb(mp(b/a, mons[i]));
            }
            else
            {
                rem.pb(mp((b/a) + 1, mons[i]));
            }
        }
        else
        {
            if (left <= a)
            {
                points++;
                continue;
            }
            else
            {
                int x = left-a;
                if (x%a == 0)
                {
                    rem.pb(mp(x/a, mons[i]));
                }
                else
                {
                    rem.pb(mp((x/a) + 1, mons[i]));
                }
            }
        }
    }

    sort(rem.begin(), rem.end());

    FOR(i,0,rem.size())
    {
        k = k - rem[i].first;
        if (k < 0)
        {
            break;
        }
        else
        {
            points++;
        }
    }

    cout<<points<<endl;
}
