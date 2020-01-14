#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

ll a[140000], tree[280000];

void build_tree(ll node, ll start, ll end, ll op)
{
    if (start == end)
    {
        tree[node] = a[start];
    }
    else
    {
        ll mid = (start+end)/2;

        build_tree(2*node, start, mid, op-1);
        build_tree(2*node+1, mid+1, end, op-1);

        if (op%2 == 0)
            tree[node] = tree[2*node]^tree[2*node+1];
        else
            tree[node] = tree[2*node]|tree[2*node+1];
    }
}

void update(ll node, ll index, ll val, ll start, ll end, ll op)
{
    if (start == end)
    {
        a[index] = val;
        tree[node] = val;
    }
    else
    {
        ll mid = (start+end)/2;

        if (index>=start && index<=mid)
        {
            update(2*node, index, val, start, mid, op-1);
        }
        else
        {
            update(2*node+1, index, val, mid+1, end, op-1);
        }

        if (op%2 == 0)
            tree[node] = tree[2*node]^tree[2*node+1];
        else
            tree[node] = tree[2*node]|tree[2*node+1];
    }
}

int main()
{
    FAST_IO;

    ll n,m, start=1, end;
    cin>>n>>m;

    end = 1<<n;

    FOR(i,1,end+1)
    {
        cin>>a[i];
    }

    build_tree(1,start,end,n);

    while(m--)
    {
        ll idx, val;
        cin>>idx>>val;

        update(1,idx, val, start, end, n);

        cout<<tree[1]<<endl;
    }
}