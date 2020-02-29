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

        int a[n+3];
        int sum = 0;

        FOR(i,0,n)
        {
            cin>>a[i];
            sum += a[i];
        }

        if (sum%2 != 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            bool ans = false;
            FOR(i,0,n)
            {
                FOR(j,i+1,n)
                {
                    if (abs(a[j]-a[i])%2 != 0)
                    {
                        ans = true;
                        break;
                    }
                }
                if (ans)
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
}
