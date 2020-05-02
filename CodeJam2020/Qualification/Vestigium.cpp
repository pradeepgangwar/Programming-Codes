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
    ll t, i=1;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        ll mat[102][102];
        ll trace = 0;

        FOR (i,0,n)
        {
            FOR (j,0,n)
            {
                cin>>mat[i][j];
                if (i == j)
                {
                    trace += mat[i][j];
                }
            }
        }

        set <ll> column[102];
        set <ll> row[102];

        FOR (i,0,n)
        {
            FOR (j,0,n)
            {
                column[j].insert(mat[i][j]);
                row[i].insert(mat[i][j]);
            }
        }

        ll col = 0, r = 0;

        FOR (i,0,n)
        {
            if (column[i].size() < n)
            {
                col++;
            }
            if (row[i].size() < n)
            {
                r++;
            }
        }

        cout<<"Case #"<<i<<": "<<trace<<' '<<r<<' '<<col<<endl;
        i++;
    }
}
