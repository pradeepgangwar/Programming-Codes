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
    ll n;
    ll a[200008];
    map <ll, ll> count;

    cin>>n;
    FOR(i,1,n)
    {
        cin>>a[i];
        count[a[i]]++;
    }

    FOR(i,1,n+1)
    {
        if (count.find(i) == count.end())
            cout<<0<<endl;
        else
        {
            cout<<count[i]<<endl;
        }
    }
}
