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
    int n,k;
    cin>>n>>k;

    vector <long double> v;
    int x;
    FOR(i,0,n)
    {
        cin>>x;
        long double sum = x*(x+1);
        sum /= 2;

        sum /= (double)x;
        // cout<<sum<<endl;
        v.pb(sum);
    }
    
    long double exp=0;
    FOR(i,0,k)
    {
        exp += v[i];
    }

    long double ans=-1;
    if (exp > ans)
    {
        ans = exp;
    }
    FOR(i,k,n)
    {
        exp -= v[i-k];
        exp += v[i];

        if (exp > ans)
        {
            ans = exp;
        }
    }

    cout<<setprecision(7)<<ans<<endl;
}