#include <bits/stdc++.h>
using namespace std;

int a[100005],tree[2000004],lazy[2000004];

void build(int node, int start, int end)
{
    if(start == end)
    {
        tree[node] = a[start];
    }
    else
    {
        int mid = (start+end)/2;
        
        build(2*node,start,mid);
        build(2*node+1,mid+1,end);
        
        tree[node] = tree[2*node] + tree[2*node + 1];
    }
}

int query(int node,int start,int end,int left, int right)
{
    if(right<start || left>end)
        return 0;

    if(lazy[node]!=0)
    {
    	tree[node] += (end-start+1)*lazy[node];

    	if(start != end)
    	{
    		lazy[2*node] += lazy[node];
    		lazy[2*node+1] += lazy[node];
    	}

    	lazy[node] = 0;
    }
        
    if(left<=start && right>=end)
        return tree[node];
    
    int mid = (start+end)/2;
    
    int p1 = query(2*node,start,mid,left,right);
    int p2 = query(2*node+1,mid+1,end,left,right);
    
    return p1+p2;
}

void update_range(int node, int start, int end, int l, int r, int val)
{
	if(lazy[node] != 0)
	{
		tree[node] += (end-start+1)*lazy[node];
		if(start != end)
		{
			lazy[2*node] += lazy[node];
			lazy[2*node+1] += lazy[node];
		}
		lazy[node] = 0;
	}

	if(start>end || start>r || end<l)
	{
		return;
	}
	if(start>=l && end<=r)
	{
		tree[node] += (end-start+1)*val;
		if(start != end)
		{
			lazy[2*node] += val;
			lazy[2*node+1] += val;
		}
		return;
	}

	int mid = (start+end)/2;
	update_range(2*node,start,mid,l,r,val);
	update_range(2*node+1,mid+1,end,l,r,val);

	tree[node] = tree[2*node] + tree[2*node+1];
}

void update(int node,int start, int end, int index, int value)
{
    if(start == end)
    {
        a[index] = value;   
        tree[node] = value;
    }
    else
    {
        int mid = (start + end) / 2;
        if(start <= index && index <= mid)
        {
            update(2*node, start, mid, index, value);
        }
        else
        {
            update(2*node+1, mid+1, end, index, value);
        }
        tree[node] = tree[2*node]+tree[2*node+1];
    }
    
}

int main()
{
    int n,q,l,r,x,y,i,s,t;
    
    cin>>t;
    
    while(t--)
    {
        cin>>n>>q;
        
        while(q--)
        {
            cin>>s;
            if(s == 0)
            {
                cin>>l>>r>>x;
                update_range(1,0,n-1,l-1,r-1,x);
            }
            else
            {
                cin>>x>>y;
                cout<<query(1,0,n-1,x-1,y-1)<<endl;
            }
        }
    }
    return 0;
}
