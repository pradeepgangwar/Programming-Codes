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

    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c,n;

        cin>>a>>b>>c>>n;

        int maxi = max(a, max(b,c));
        int diff_a = maxi - a;
        int diff_b = maxi - b;
        int diff_c = maxi - c;

        if (n<diff_a+diff_b+diff_c)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            int left = n - (diff_a+diff_b+diff_c);

            if (left == 0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                if (left%3 == 0)
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
}