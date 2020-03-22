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
    int t;
    cin>>t;

    while (t--)
    {
        string s;
        cin>>s;

        int l = s.length();
        int ans = 0;
        int curr = 0;
        FOR (i,0,l)
        {
            if (s[i] == 'R')
            {
                curr++;
                ans = max(ans, curr);
                curr = 0;
            }
            else
            {
                curr++;
            }
        }
        curr++;
        ans = max(ans, curr);

        cout<<ans<<endl;
    }
}
