#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

#define MAX 200006

int main()
{
    FAST_IO;

    ll t;
    cin>>t;

    while(t--)
    {
        string s,t;
        cin>>s>>t;

        vector <ll> s_place[33];
        ll s_is[33] = {0};

        for (int i=0; i<s.length(); i++)
        {
            s_is[s[i]-97]++;
            s_place[s[i]-97].pb(i+1);
        }

        ll ans = 1;
        ll last = -1;
        bool possible = true;
        set <ll> place;
        for (int i=0; i<t.length(); i++)
        {
            // cout<<t[i]<<endl;
            if (s_is[t[i]-97] == 0)
            {
                possible = false;
                break;
            }
            else
            {
                if (upper_bound(s_place[t[i]-97].begin(), s_place[t[i]-97].end(), last) != s_place[t[i]-97].end())
                {
                    last = *upper_bound(s_place[t[i]-97].begin(), s_place[t[i]-97].end(), last);
                    place.insert(*upper_bound(s_place[t[i]-97].begin(), s_place[t[i]-97].end(), last));
                }
                else
                {
                    ans++;
                    last = -1;
                    place.clear();
                    i--;
                }
            }
        }

        if (possible)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}