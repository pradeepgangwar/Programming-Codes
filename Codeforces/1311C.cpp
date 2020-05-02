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
        ll n, m, a[200009];
        cin>>n>>m;

        string s;
        cin>>s;

        FOR (i,0,m)
        {
            cin>>a[i];
        }

        sort(a,a+m);

        map <int, int> count;

        m--;
        ll next_inc = a[m];
        ll inc = 1;

        FOR_REV (i,n-1,0)
        {
            while (i+1 == next_inc && m >= 0)
            {
                inc++;
                m--;
                next_inc = a[m];
            }
            count[s[i]-'a'] += inc;
            // cout<<inc<<endl;
            // cout<<"count "<<s[i]<<" "<<count[s[i]-'a']<<endl;
        }

        FOR (i,0,26)
        {
            cout<<count[i]<<" ";
        }
        cout<<endl;
    }
}
