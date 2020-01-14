#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

ll a[20009];
ll tree[200009];

void build(ll node, ll start, ll end)
{
    if (start == end)
    {
        tree[node] = a[start];
    }

    else
    {
        ll mid = (start+end)/2;

        build(2*node, start, mid);
        build(2*node+1, mid+1, end);
        
        tree[node] = tree[2*node]&tree[2*node+1];
    }
}

ll query(ll node, ll start, ll end, ll l, ll r)
{
    if (start>end || l>end || r<start)
        return 8589934591;

    if (l<=start && r>=end)
        return tree[node];
    
    ll mid = (start+end)/2;

    ll r1 = query(2*node, start, mid, l, r);
    ll r2 = query(2*node+1, mid+1, end, l, r);

    return (r1&r2);
}

int main()
{
    FAST_IO;

    ll t;
    cin>>t;

    while(t--)
    {
        ll n,k;
        cin>>n>>k;

        FOR(i,0,n)
            cin>>a[i];

        if (2*k >= n)
        {
            ll ans = 8589934591;

            FOR(i,0,n)
                ans= ans&a[i];
            
            FOR(i,0,n)
                cout<<ans<<" ";
            cout<<endl;
        }
        else
        {
            build(1,0,n-1);

            FOR(i,0,n)
            {
                ll l = (i-k+n)%n;
                ll r = (i+k)%(n);

                if (i)
                    cout<<" ";
                
                if (l>r)
                {
                    ll t1 = query(1,0,n-1,0,r);
                    ll t2 = query(1,0,n-1,l,n-1);

                    cout<<(t1&t2);
                }
                else
                    cout<<query(1,0,n-1,l,r);
            }
            cout<<endl;
        }
    }

    return 0;
}