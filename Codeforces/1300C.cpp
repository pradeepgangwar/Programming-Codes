#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

int main()
{
    FAST_IO;

    int n;
    cin>>n;

    int a[100008];

    FOR (i,0,n)
    {
        cin>>a[i];
    }

    unordered_set <int> idx;
    int i;
    for (i=31; i>=0; i--)
    {
        int set=0;
        
        for (int j=0; j<n; j++)
        {
            if (a[j] & (1<<i))
            {
                set++;
                idx.insert(j);
            }
        }
        if (set == 1)
        {
            break;
        }
        idx.clear();
    }

    if (i<0)
    {
        FOR(j,0,n)
        {
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
    else
    {
        int x = *idx.begin();
        cout<<a[x]<<" ";
        for (int j=0; j<n; j++)
        {
            if (j!=x)
            {
                cout<<a[j]<<" ";
            }
        }
        cout<<endl;
    }
}
