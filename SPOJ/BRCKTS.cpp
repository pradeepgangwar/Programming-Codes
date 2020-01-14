#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

string a;
pair <ll, ll> tree[200000];

void build(ll node, ll start, ll end)
{
    if (start == end)
    {
        if (a[start] == '(')
            tree[node] = mp(1, 1);
        else
            tree[node] = mp(-1, -1);
    }

    else
    {
        ll mid = (start+end)/2;

        build(2*node, start, mid);
        build(2*node+1, mid+1, end);
        
        tree[node] = mp(tree[2*node].first+tree[2*node+1].first, min(tree[2*node].second, tree[2*node].first+tree[2*node+1].second));
    }
}

void update(ll node, ll start, ll end, ll idx)
{
    if (start == end)
    {
        if (a[idx] == '(')
        {
            a[idx] = ')';
            tree[node] = mp(-1,-1);
        }
        else
        {
            a[idx] = '(';
            tree[node] = mp(1,1);
        }
    }

    else
    {
        ll mid = (start+end)/2;
    
        if(start <= idx && idx <= mid)
            update(2*node, start, mid, idx);
        else
            update(2*node+1, mid+1, end, idx);

        tree[node] = mp(tree[2*node].first+tree[2*node+1].first, min(tree[2*node].second, tree[2*node].first+tree[2*node+1].second));
    }
}

int main()
{
    FAST_IO;

    ll test=10;

    while(test--)
    {
        ll n;
        cin>>n;

        cin>>a;

        build(1,0,n-1);

        ll m;
        cin>>m;

        cout<<"Test "<<10-test<<":"<<endl;

        while(m--)
        {
            ll check;
            cin>>check;

            if (check == 0)
            {
                if (tree[1].first == 0 && tree[1].second == 0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
            {
                update(1,0,n-1,check-1);
            }
        }
    }

    return 0;
}