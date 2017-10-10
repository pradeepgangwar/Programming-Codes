#include <bits/stdc++.h>
using namespace std;

long long int a[1000005],tree[3000004],lazy[3000004];

long long int query(long long int node,long long int start,long long int end,long long int left,long long int right)
{
    if(start>end || right<start || left>end)
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
    
    long long int mid = (start+end)/2;
    long long int p1 = query(2*node,start,mid,left,right);

    long long int p2 = query(2*node+1,mid+1,end,left,right);
    
    return p1+p2;
}

void update_range(long long int node, long long int start,long long int end,long long int l,long long int r,long long int val)
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
		lazy[node] = 0;
		return;
	}

	long long int mid = (start+end)/2;
	update_range(2*node,start,mid,l,r,val);
	update_range(2*node+1,mid+1,end,l,r,val);

	tree[node] = tree[2*node] + tree[2*node+1];
}

int main()
{
    int n,q,l,r,x,y,i,s,t;
    
    cin>>t;
    
    while(t--)
    {
        cin>>n>>q;
        
        memset(lazy,0,sizeof lazy);
        memset(a,0,sizeof a);
        memset(tree,0,sizeof tree);
        
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
