#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

#define MAX 300009

struct SegmentTree {
    int max1;
    int max2;
};

int a[MAX];
SegmentTree tree[MAX];

void build(int node, int l, int r)
{
    if (l == r)
    {
        tree[node].max1 = a[l];
        tree[node].max2 = -1;
    }
    else
    {
        int mid = (l+r)/2;

        build(2*node, l, mid);
        build(2*node+1, mid+1, r);

        if (tree[2*node].max1 > tree[2*node+1].max1)
        {
            tree[node].max1 = tree[2*node].max1;
            if (tree[2*node].max2 > tree[2*node+1].max1)
            {
                tree[node].max2 = tree[2*node].max2;
            }
            else
            {
                tree[node].max2 = tree[2*node+1].max1;
            }
        }
        else if (tree[2*node].max1 < tree[2*node+1].max1)
        {
            tree[node].max1 = tree[2*node+1].max1;
            if (tree[2*node+1].max2 > tree[2*node].max1)
            {
                tree[node].max2 = tree[2*node+1].max2;
            }
            else
            {
                tree[node].max2 = tree[2*node].max1;
            }
        }
        else
        {
            tree[node].max1 = tree[node].max2 = tree[2*node].max1;
        }
        
    }
}

void update(int node, int start, int end, int idx, int val)
{
    if (start == end)
    {
        a[idx] = val;
        tree[node].max1 = a[idx];
        tree[node].max2 = -1;
    }
    else
    {
        int mid = (start+end)/2;
        
        if (idx>=start && idx <=mid)
            update(2*node, start, mid, idx, val);
        else
            update(2*node+1, mid+1, end, idx, val);

        if (tree[2*node].max1 >= tree[2*node+1].max1)
        {
            tree[node].max1 = tree[2*node].max1;
            if (tree[2*node].max2 >= tree[2*node+1].max1)
            {
                tree[node].max2 = tree[2*node].max2;
            }
            else
            {
                tree[node].max2 = tree[2*node+1].max1;
            }
        }
        else
        {
            tree[node].max1 = tree[2*node+1].max1;
            if (tree[2*node+1].max2 >= tree[2*node].max1)
            {
                tree[node].max2 = tree[2*node+1].max2;
            }
            else
            {
                tree[node].max2 = tree[2*node].max1;
            }
        }
    }
}

SegmentTree query(int node, int start, int end, int l, int r)
{
    if (l>end || r<start || start>end)
    {
        SegmentTree temp;
        temp.max1 = -1;
        temp.max2 = -1;

        return temp;
    }
    
    if (l<=start && r>=end)
    {
        return tree[node];
    }

    int mid = (start+end)/2;
    
    SegmentTree left = query(2*node, start, mid, l, r);
    SegmentTree right = query(2*node+1, mid+1, end, l, r);

    SegmentTree ans;

    if (left.max1 >= right.max1)
    {
        ans.max1 = left.max1;
        if (left.max2 >= right.max1)
        {
            ans.max2 = left.max2;
        }
        else
        {
            ans.max2 = right.max1;
        }
    }
    else
    {
        ans.max1 = right.max1;
        if (right.max2 >= left.max1)
        {
            ans.max2 = right.max2;
        }
        else
        {
            ans.max2 = left.max1;
        }
    }
    return ans;
}

int main()
{
    FAST_IO;

    int n;
    cin>>n;
    
    FOR(i,0,n)
    {
        cin>>a[i];
    }

    build(1,0,n-1);

    int q;
    cin>>q;

    while(q--)
    {
        char ch;
        cin>>ch;

        if (ch == 'Q')
        {
            int a,b;
            cin>>a>>b;
            SegmentTree res = query(1,0,n-1,a-1,b-1);
            assert(res.max1>0 && res.max2>0);
            cout<<res.max1+res.max2<<endl;
        }
        else
        {
            int a,b;
            cin>>a>>b;
            update(1,0,n-1,a-1,b);
        }   
    }
}