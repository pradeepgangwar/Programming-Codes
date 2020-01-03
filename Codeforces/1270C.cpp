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
        ll n, a[100008];
        
        cin>>n;

        ll sum=0, XOR=0;

        FOR(i,0,n)
        {
            cin>>a[i];
            sum += a[i];
            XOR ^= a[i];
        }

        if (sum != 2*XOR)
        {
            if (XOR == 0)
            {
                cout<<1<<endl<<sum<<endl;
            }
            else
            {
                cout<<2<<endl<<XOR<<" "<<sum+XOR<<endl;   
            }
        }
        else
        {
            cout<<0<<endl;   
        }
    }
}