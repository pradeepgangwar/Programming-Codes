#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

struct SegmentTree {
    int sum;
    int maxSum;
    int prefixSum;
    int suffixSum;
};

int a[50006];
SegmentTree tree[1000007];

SegmentTree merge(SegmentTree a, SegmentTree b)
{
    SegmentTree temp;

    temp.sum = a.sum+b.sum;
    temp.maxSum = max(max(a.maxSum, b.maxSum), (a.suffixSum+b.prefixSum));
    temp.prefixSum = max(a.prefixSum, a.sum+b.prefixSum);
    temp.suffixSum = max(b.suffixSum, b.sum+a.suffixSum);

    return temp;
}

void build(int node, int start, int end)
{
    if (start == end)
    {
        tree[node].maxSum = a[start];
        tree[node].suffixSum = a[start];
        tree[node].prefixSum = a[start];
        tree[node].sum = a[start];
    }
    else
    {
        int mid = (start+end)/2;

        build(2*node, start, mid);
        build(2*node+1, mid+1, end);

        tree[node] = merge(tree[2*node], tree[2*node+1]);
    }
}

SegmentTree query(int node, int start, int end, int l, int r)
{
    if (l>end || r<start || start>end)
    {
        SegmentTree temp;
        temp.maxSum = -10003;
        temp.sum = -10003;
        temp.prefixSum = -10003;
        temp.suffixSum = -10003;

        return temp;
    }

    else if (l<=start && r>=end)
        return tree[node];
    
    int mid = (start+end)/2;

    SegmentTree q1 = query(2*node, start, mid, l, r);
    SegmentTree q2 = query(2*node+1, mid+1, end, l, r);

    return merge(q1, q2);
}

void update(int node, int start, int end, int x, int y)
{
    if (start == end)
    {
        a[x] = y;
        tree[node].maxSum = y;
        tree[node].suffixSum = y;
        tree[node].prefixSum = y;
        tree[node].sum = y;
    }
    else
    {
        int mid = (start+end)/2;

        if (x<=mid && x>=start)
            update(2*node, start, mid, x, y);
        else
            update(2*node+1, mid+1, end, x, y);

        tree[node] = merge(tree[2*node], tree[2*node+1]);
    }
}

int main()
{
    FAST_IO;

    int n;
    cin>>n;

    FOR(i,1,n+1)
    {
        cin>>a[i];
    }

    build(1,1,n);

    int q;
    cin>>q;
    while(q--)
    {
        int op, left, right;
        cin>>op>>left>>right;
        if (op == 1)
        {
            SegmentTree ans = query(1,1,n,left,right);
            cout<<max(max(ans.sum, ans.maxSum), max(ans.prefixSum, ans.suffixSum))<<endl;
        }
        else
        {
            update(1,1,n,left,right);
        }
    }
}