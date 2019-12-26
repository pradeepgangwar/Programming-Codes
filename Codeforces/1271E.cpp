#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

ll count(ll x, ll d, ll n)
{
    ll ans = 0;

    while(x<n)
    {
        if (x+d-1<=n)
        {
            ans += d;
        }
        else
        {
            ans += n-x+1;
        }
        x = x*2;
        d = d*2;
    }
    return ans;
}

int main()
{
    ll n,k;
    cin>>n>>k;

    if (k==1)
    {
        cout<<n<<endl;
        return 0;
    }

    // binary search on odd integers
    ll l=1, r=n, ans1=0;
    while(l<r)
    {
        ll mid = (l+r)/2;
        if (mid%2 == 0)
        {
            mid = mid+1;
        }

        ll cnt = count(mid, 1, n);

        if (cnt>=k)
        {
            ans1 = mid;
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }

    // binary search on even integers
    ll ans2=0;
    l=1, r=n;
    while(l<r)
    {
        ll mid = (l+r)/2;
        if (mid%2 != 0)
        {
            mid = mid+1;
        }

        ll cnt = count(mid, 2, n);

        if (cnt>=k)
        {
            ans2 = mid;
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }

    ll answer = max(ans1, ans2);
    cout<<answer<<endl;

}