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
        int n;
        cin>>n;

        int a[6000];

        FOR(i,0,n)
        {
            cin>>a[i];
        }

        map <int, int> cnt;
        cnt[a[0]]++;

        bool ans = false;

        FOR (i,1,n)
        {
            cnt[a[i]]++;
            if (cnt[a[i]] == 2 && a[i-1] != a[i])
            {
                ans = true;
                break;
            }
            if (cnt[a[i]] > 2)
            {
                ans = true;
                break;
            }
        }

        if (ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
