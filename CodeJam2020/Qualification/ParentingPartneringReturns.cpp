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
    FAST_IO;

    ll t, i=1;
    cin>>t;

    while(t--)
    {
        cout<<"Case #"<<i<<": ";
        i++;

        ll n,s,e;
        cin>>n;

        bool cam = true, jam = true;

        vector <pair <int, int> > time;
        vector <pair <int, int> > start;
        vector <pair <int, int> > end;

        FOR (i,0,n)
        {
            cin>>s>>e;
            time.pb(mp(s,i));
            time.pb(mp(e,-1));
            end.pb(mp(e,i));
        }

        sort(time.begin(), time.end());

        ll overlap = 0;
        bool ans = true;

        for (auto x: time)
        {
            if (x.second >= 0)
                overlap++;
            else
                overlap--;
            

            if (overlap >= 3)
            {
                ans = false;
                break;
            }
        }

        if (ans)
        {
            ll camFree, jamFree;
            vector <pair <int, char>> sequence;

            for (auto x: time)
            {
                if (x.second >= 0)
                {
                    if (jam)
                    {
                        jam = !jam;
                        jamFree = end[x.second].first;
                        sequence.pb(mp(x.second, 'J'));
                    }
                    else if (cam)
                    {
                        cam = !cam;
                        camFree = end[x.second].first;
                        sequence.pb(mp(x.second, 'C'));
                    }
                }
                else
                {
                    if (x.first == jamFree && jam == false)
                    {
                        jam = !jam;
                    }
                    if (x.first == camFree && cam == false)
                    {
                        cam = !cam;
                    }
                }
            }
            sort(sequence.begin(), sequence.end());
            for (auto x: sequence)
            {
                cout<<x.second;
            }
            cout<<endl;
        }
        else
        {
            cout<<"IMPOSSIBLE"<<endl;
        }
    }
}
