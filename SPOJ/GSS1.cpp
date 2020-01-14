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

void build(int node, int start, int end)
{
    // cout<<start<<" "<<end<<endl;
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

        // cout<<tree[2*node]<<" "<<tree[2*node+1]<<endl;
        tree[node].sum = tree[2*node].sum+tree[2*node+1].sum;
        tree[node].maxSum = max(max(tree[2*node].maxSum, tree[2*node+1].maxSum), (tree[2*node].suffixSum+tree[2*node+1].prefixSum));
        tree[node].prefixSum = max(tree[2*node].prefixSum, tree[2*node].sum+tree[2*node+1].prefixSum);
        tree[node].suffixSum = max(tree[2*node+1].suffixSum, tree[2*node+1].sum+tree[2*node].suffixSum);
    }
}

SegmentTree query(int node, int start, int end, int l, int r)
{
    // cout<<"l "<<l<<" r "<<r<<endl;
    if (l>end || r<start || start>end)
    {
        SegmentTree temp;
        temp.maxSum = -15008;
        temp.sum = -15008;
        temp.prefixSum = -15008;
        temp.suffixSum = -15008;

        return temp;
    }

    else if (l<=start && r>=end)
        return tree[node];
    
    int mid = (start+end)/2;

    SegmentTree q1 = query(2*node, start, mid, l, r);
    SegmentTree q2 = query(2*node+1, mid+1, end, l, r);

    SegmentTree sol;

    sol.sum = q1.sum+q2.sum;
    sol.maxSum = max(max(q1.maxSum, q2.maxSum), (q1.suffixSum+q2.prefixSum));
    sol.prefixSum = max(q1.prefixSum, q1.sum+q2.prefixSum);
    sol.suffixSum = max(q2.suffixSum, q2.sum+q1.suffixSum);

    return sol;
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
        int left, right;
        cin>>left>>right;
        SegmentTree ans = query(1,0,n-1,left-1,right-1);

        cout<<max(max(ans.sum, ans.maxSum), max(ans.prefixSum, ans.suffixSum))<<endl;
    }
}