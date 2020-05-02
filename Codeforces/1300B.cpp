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

    while(t--)
    {
        int n;
        cin>>n;

        int a[200009];

        for (int i=0; i<2*n; i++)
        {
            // cout<<i<<endl;
            cin>>a[i];
            // cout<<a[i]<<endl;
        }

        sort(a, a+2*n);

        if (n%2 == 0)
        {
            if (n == 2)
            {
                int ans = min(a[2]-a[1], a[2]-a[0]);
                cout<<ans<<endl;
            }
            else
            {
                int x = n-1;
                int ans = min(a[x+1]-a[x], a[x+1]-a[x-1]);
                cout<<ans<<endl;   
            }
        }
        else
        {
            // cout<<a[n]<<" "<<a[n-1]<<endl;
            cout<<a[n]-a[n-1]<<endl;   
        }
    }
}
