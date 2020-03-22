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

        int a[1005];
        int sum = 0;
        vector <int> zero;

        FOR(i,0,n)
        {
            cin>>a[i];
            sum += a[i];
            if (a[i] == 0)
            {
                zero.pb(i);
            }
        }

        if (zero.size() != 0)
        {
            if (sum+zero.size() == 0)
            {
                cout<<zero.size()+1<<endl;
            }
            else
            {
                cout<<zero.size()<<endl;
            }
            
        }
        else if (sum == 0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}
