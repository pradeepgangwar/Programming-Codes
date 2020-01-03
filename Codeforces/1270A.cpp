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
        ll n,k1,k2;
        cin>>n>>k1>>k2;
        ll temp;
        bool win = false;

        FOR(i,0,k1)
        {
            cin>>temp;
            if (temp == n)
            {
                win = true;
            }
        }
        FOR(i,0,k2)
        {
            cin>>temp;
        }
        if (win)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }

}