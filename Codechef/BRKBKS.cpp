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

    while (t--)
    {
        ll s,a;
        cin>>s;

        vector <ll> weight;
        FOR(i,0,3)
        {
            cin>>a;
            weight.pb(a);
        }
        sort(weight.begin(), weight.end());

        ll current_avl = 0, count=0;
        FOR(i,0,3)
        {
            if (current_avl+weight[i] > s)
            {
                count++;
                current_avl = 0;
                current_avl += weight[i];
            }
            else
            {
                current_avl += weight[i];
            }
        }
        count++;
        cout<<count<<endl;
    }
}