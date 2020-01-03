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
        ll n, a[200008];
        // ll left_max = INT_MIN, left_min = INT_MAX, right_max = INT_MIN, right_min = INT_MAX;
        ll max=INT_MIN, min=INT_MAX, max_index, min_index;

        cin>>n;

        FOR(i,0,n)
        {
            cin>>a[i];
        }

        ll l=-1, r=-1;
        bool answer = false;

        FOR(i,1,n)
        {
            if (abs(a[i]-a[i-1])>1)
            {
                l = i;
                r = i+1;
                answer = true;
                break;
            }
        }

        if (answer)
        {
            cout<<"YES"<<endl;
            cout<<l<<" "<<r<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}