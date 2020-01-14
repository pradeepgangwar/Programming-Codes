#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

struct SegmentTree {
    int prefix;
    int suffix;
    int ans;
};

int a[265000];
SegmentTree tree[265000];

void build(int node, int start, int end)
{
    if (start == end)
    {
        tree[node].prefix = 1;
        tree[node].suffix = 1;
        tree[node].ans = 1;
    }
    else
    {
        int mid = (start+end)/2;

        build(2*node, start, mid);
        build(2*node+1, mid+1, end);

        int size = (end-start+1)/2;

        if (tree[2*node].prefix == size && a[mid] == a[mid+1])
        {
            tree[node].prefix = tree[2*node].prefix + tree[2*node+1].prefix;
        }
        else
        {
            tree[node].prefix = tree[2*node].prefix;
        }
        
        if (tree[2*node+1].suffix == size && a[mid+1] == a[mid])
        {
            tree[node].suffix = tree[2*node+1].suffix + tree[2*node].suffix;
        }
        else
        {
            tree[node].suffix = tree[2*node+1].suffix;
        }

        tree[node].ans = max(max(max(tree[2*node].ans, tree[2*node+1].ans), tree[node].prefix), tree[node].suffix);

        if (a[mid] == a[mid+1])
        {
            tree[node].ans = max(tree[node].ans, (tree[2*node].suffix+tree[2*node+1].prefix));
        }
    }
}

SegmentTree query(int node, int start, int end, int l, int r)
{
    if (l>end || r<start || start>end)
    {
        SegmentTree temp;
        temp.prefix = 0;
        temp.suffix = 0;
        temp.ans = 0;

        return temp;
    }

    else if (l<=start && r>=end)
        return tree[node];
    
    int mid = (start+end)/2;

    SegmentTree q1 = query(2*node, start, mid, l, r);
    SegmentTree q2 = query(2*node+1, mid+1, end, l, r);

    SegmentTree sol;

    int size = (end-start+1)/2;

    if (q1.prefix == size && a[mid] == a[mid+1])
    {
        sol.prefix = q1.prefix + q2.prefix;
    }
    else
    {
        sol.prefix = q1.prefix;
    }
    
    if (q2.suffix == size && a[mid+1] == a[mid])
    {
        sol.suffix = q2.suffix + q1.suffix;
    }
    else
    {
        sol.suffix = q2.suffix;
    }

    sol.ans = max(max(max(q1.ans, q2.ans), sol.prefix), sol.suffix);

    if (a[mid] == a[mid+1])
    {
        sol.ans = max(sol.ans, (q1.suffix+q2.prefix));
    }

    return sol;
}

int main()
{
    FAST_IO;

    while(true)
    {
        int n;
        cin>>n;
        if (!n)
            return 0;
        int q;
        cin>>q;

        FOR(i,1,n+1)
        {
            cin>>a[i];
        }

        build(1,1,131072);

        while(q--)
        {
            int left, right;
            cin>>left>>right;
            SegmentTree ans = query(1,1,131072,left,right);

            cout<<ans.ans<<endl;
        }
    }

    return 0;
}