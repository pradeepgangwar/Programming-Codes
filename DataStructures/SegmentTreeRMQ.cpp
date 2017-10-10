#include <iostream>
using namespace std;

int a[100005],tree[2000004];

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
        
        tree[node] = min(tree[2*node],tree[2*node + 1]);
    }
}

int query(int node,int start,int end,int left, int right)
{
    if(right<start || left>end)
        return 100006;
        
    else if(left<=start && right>=end)
        return tree[node];
    
    int mid = (start+end)/2;
    
    int p1 = query(2*node,start,mid,left,right);
    int p2 = query(2*node+1,mid+1,end,left,right);
    
    return min(p1,p2);
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
        tree[node] = min(tree[2*node],tree[2*node+1]);
    }
    
}

int main()
{
    int n,q,l,r,x,y,i;
    string s;
    
    cin>>n>>q;
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    build(1,0,n-1);

    while(q--)
    {
        cin>>s;
        if(s == "q")
        {
            cin>>l>>r;
            cout<<query(1,1,n,l,r)<<endl;
        }
        else
        {
            cin>>x>>y;
            update(1,1,n,x,y);
        }
    }
    return 0;
}
