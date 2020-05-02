#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

int main()
{
    FAST_IO;

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        if (n == 1)
        {
            cout<<1<<endl;
            cout<<1<<" "<<1<<endl;
        }

        if (n%2 == 0)
        {
            cout<<n/2<<endl;
            cout<<2<<" "<<1<<" "<<2<<endl;
            for (int i=3; i<=n; i+=2)
            {
                cout<<2<<" "<<i<<" "<<i+1<<endl;
            }
        }
        else
        {
            cout<<n/2<<endl;
            cout<<3<<" "<<1<<" "<<2<<" "<<n<<endl;
            for (int i=4; i<=n; i+=2)
            {
                cout<<2<<" "<<i-1<<" "<<i<<endl;
            }
        }
    }
}
