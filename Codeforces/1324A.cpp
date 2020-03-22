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

        int a[200];

        FOR(i,0,n)
        {
            cin>>a[i];
        }

        bool ans = true;

        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if ((a[i]-a[j])%2 != 0)
                {
                    ans = false;
                    break;
                }
            }
            if (!ans)
            {
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
