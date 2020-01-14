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
        ll n, sum=0;
        cin>>n;

        ll a[n+3];
        FOR(i,0,n)
        {
            cin>>a[i];
            sum+=a[i];
        }

        ll max1=INT_MIN; 
        ll max_ending_here=0;
        FOR(i,0,n-1)
        {
            max_ending_here += a[i];

            if (max1 < max_ending_here)
            {
                max1 = max_ending_here;
            }
            if (max_ending_here < 0)
            {
                max_ending_here = 0;
            }
        }
        ll max2=INT_MIN; 
        max_ending_here=0;
        FOR(i,1,n)
        {
            max_ending_here += a[i];

            if (max2 < max_ending_here)
            {
                max2 = max_ending_here;
            }
            if (max_ending_here < 0)
            {
                max_ending_here = 0;
            }
        }
        ll maxi = max(max1, max2);
        // cout<<sum<<" "<<maxi<<endl;
        if (maxi >= sum)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }   
    }
}