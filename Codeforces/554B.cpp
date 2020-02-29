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

    ll n;
    cin>>n;

    string s[110];
    FOR(i,0,n)
    {
        cin>>s[i];
    }

    int ans = INT_MIN;
    FOR(i,0,n)
    {
        int cnt = 0;
        FOR(j,0,n)
        {
            bool same = true;
            FOR(k,0,n)
            {
                if (s[i][k] != s[j][k])
                {
                    same = false;
                    break;
                }
            }
            if(same)
            {
                cnt++;
            }
        }
        ans = max(ans,cnt);
    }

    cout<<ans<<endl;
}