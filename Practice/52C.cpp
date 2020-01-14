#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

ll a[200004], tree[1000005], lazy[1000005];

void build_tree(ll node, ll start, ll end)
{
    if (start == end)
    {
        tree[node] = a[start];
    }
    else
    {
        ll mid = (start+end)/2;

        build_tree(2*node, start, mid);
        build_tree(2*node+1, mid+1, end);

        tree[node] = min(tree[2*node],tree[2*node+1]);
    }
}

void update_range(ll node, ll start, ll end, ll l, ll r, ll val)
{
    if (lazy[node] != 0)
    {
        tree[node] += lazy[node];
        if (start != end)
        {
            lazy[2*node] += lazy[node];
            lazy[2*node+1] += lazy[node];
        }
        lazy[node] = 0;
    }
    
    if (start>end || l>end || r<start)
        return;
    
    if (l<=start && r>=end)
    {
        tree[node] += val;
        if (start != end)
        {
            lazy[2*node] += val;
            lazy[2*node+1] += val;
        }
        return;
    }
    
    ll mid = (start+end)/2;

    update_range(2*node, start, mid, l, r, val);
    update_range(2*node+1, mid+1, end, l, r, val);

    tree[node] = min(tree[2*node],tree[2*node+1]);
}

ll query(ll node, ll start, ll end, ll l, ll r)
{
    if (start>end || r<start || l>end)
        return LLONG_MAX;

    if (lazy[node] != 0)
    {
        tree[node] += lazy[node];
        if (start != end)
        {
            lazy[2*node] += lazy[node];
            lazy[2*node+1] += lazy[node];
        }
        lazy[node] = 0;
    }

    if (l<=start && r>=end)
        return tree[node];

    ll mid = (start+end)/2;

    ll r1= query(2*node, start, mid, l, r);
    ll r2 = query(2*node+1, mid+1, end, l, r);

    return min(r1, r2);
}

int main()
{
    FAST_IO;

    ll n;
    cin>>n;

    FOR(i,0,n)
    {
        cin>>a[i];
    }

    build_tree(1,0,n-1);

    int m;
    cin>>m;

    while(m--)
    {
        ll l,r;
        cin>>l>>r;

        if (cin.peek() == '\n')
        {
            if (l>r)
            {
                ll temp = query(1,0,n-1,l,n-1);
                ll temp2 = query(1,0,n-1,0,r);

                cout<<min(temp, temp2)<<endl;
            }
            else
            {
                cout<<query(1,0,n-1,l,r)<<endl;
            }
        }
        else
        {
            ll val;
            cin>>val;
            
            if (l>r)
            {
                update_range(1,0,n-1,l,n-1,val);
                update_range(1,0,n-1,0,r,val);
            }
            else
            {
                update_range(1,0,n-1,l,r,val);
            }
        }
    }
}