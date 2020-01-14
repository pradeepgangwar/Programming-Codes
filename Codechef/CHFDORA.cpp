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

    ll t;
    cin>>t;

    while(t--)
    {
        ll n,m;
        cin>>n>>m;

        ll a[n+2][m+2];

        FOR(i,1,n+1)
        {
            FOR(j,1,m+1)
            {
                cin>>a[i][j];
            }
        }

        int answer = 0;

        FOR(i,1,n+1)
        {
            FOR(j,1,m+1)
            {
                int pall_len = min(min(min(i,j), n+1-i), m+1-j);
                FOR_REV(k,pall_len-1,1)
                {
                    if (a[i][j+k] != a[i][j-k])
                    {
                        pall_len = k;
                    }
                }
                if (pall_len>1)
                {
                    FOR(k,pall_len-1,1)
                    {
                        if (a[i+k][j] != a[i-k][j])
                        {
                            pall_len = k;
                        }
                    }
                }
                answer+=pall_len;
            }
        }

        cout<<answer<<endl;
    }
}