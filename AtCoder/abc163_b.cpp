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
    ll n,m;
    ll a[1000008];
    ll sum = 0;

    cin>>n>>m;
    FOR(i,0,m)
    {
        cin>>a[i];
        sum+=a[i];
    }

    if (sum > n)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<n-sum<<endl;
    }
}
