#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
struct node
{
    int max1,max2;
    void Merge(node &A,node &B)
    {
        if(A.max1>B.max1)
        {
            max1=A.max1;
            max2=max(A.max2,B.max1);
        }
        else if(A.max1<B.max1)
        {
            max1=B.max1;
            max2=max(A.max1,B.max2);
        }
        else
        {
            max1=max2=A.max1;
        }
    }
    void createleaf(int v)
    {
        max1=v;
        max2=-1;
    }
}T[300000];
int a[100010];
 
void init(int i,int l,int r)
{
    if(l==r)
    {
        T[i].createleaf(a[l]);
        return;
    }
    int mid=(l+r)>>1,left=(i<<1),right=(i<<1)+1;
    init(left, l, mid);
    init(right, mid+1, r);
    T[i].Merge(T[left], T[right]);
    
}
 
void query(node &res,int l,int r,int u,int v,int idx)
{
    if(l==u && r==v)
    {
        res=T[idx];
        return;
    }
    int mid=(l+r)/2;
    if(mid>=v)
        query(res,l,mid,u,v,2*idx);
    else if(mid<u)
        query(res,mid+1,r,u,v,2*idx+1);
    else
    {
        node left,right;
        query(left,l,mid,u,mid,2*idx);
        query(right,mid+1,r,mid+1,v,2*idx+1);
        res.Merge(left,right);
    }
    
}
void update(int i,int l,int r,int index,int val)
{
    if(l==r && l==index)
    {
        T[i].createleaf(val);
        return;
    }
    else
    {
        int m=(l+r)/2;
        if(index<=m)
            update(2*i,l,m,index,val);
        else
            update(2*i+1,m+1,r,index,val);
        T[i].Merge(T[2*i],T[2*i+1]);
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,q,x,y;
    char ch;
    node res;
    cin>>n;
    for(i=0;i<n;i++) cin>>a[i];
    init(1, 0, n-1);
    cin>>q;
    while (q--) {
        cin>>ch>>x>>y;
        if(ch=='Q')
        {
            query(res, 0, n-1, x-1, y-1, 1);
            assert(res.max1>0 && res.max2>0);
            cout<<res.max1+res.max2<<'\n';
        }
        else
            update(1, 0, n-1, x-1, y);
        
    }
    return 0;
} 