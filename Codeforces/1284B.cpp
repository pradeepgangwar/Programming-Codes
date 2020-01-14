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

    ll n;
    cin>>n;

    ll answer=0;
    vector <ll> maxes;
    vector <ll> minies;
    ll count = n;
    FOR(i,0,n)
    {
        ll l;
        cin>>l;
    
        vector <ll> v;
        ll temp, maxi=INT_MIN, mini=INT_MAX;
        FOR(j,0,l)
        {
            cin>>temp;
            v.pb(temp);
            if (temp > maxi)
            {
                maxi = temp;
            }
            if (temp < mini)
            {
                mini = temp;
            }
        }
        reverse(v.begin(), v.end());
        if (is_sorted(v.begin(), v.end()))
        {
            maxes.pb(maxi);
            minies.pb(mini);
        }
        else
        {
            // cout<<"j "<<i<<endl;
            answer += 2*count-1;
            count--;
        }
    }
    // cout<<"answer "<<answer<<endl;
    sort(maxes.begin(), maxes.end());
    sort(minies.begin(), minies.end());

    vector <ll> :: iterator it, it_b;

    ll size_max = maxes.size();

    for (it=minies.begin(); it!=minies.end(); it++)
    {
        ll val = *it;
        it_b = lower_bound(maxes.begin(), maxes.end(), val+1);

        if (it_b!=maxes.end())
        {
            answer += maxes.end()-it_b;
        }
    }

    cout<<answer<<endl;
}