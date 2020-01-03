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

    ll a[n+2];
    set <ll> boxers;

    FOR(i,0,n)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());

    FOR(i,0,n)
    {
        if (boxers.count(a[i]+1) == 0)
        {
            boxers.insert(a[i]+1);
        }
        else if (boxers.count(a[i]) == 0)
        {
            boxers.insert(a[i]);
        }
        else if (boxers.count(a[i]-1) == 0 && a[i]-1>0)
        {
            boxers.insert(a[i]-1);
        }
    }

    cout<<boxers.size()<<endl;
}