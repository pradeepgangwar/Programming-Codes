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
    int n, k, remaining, diagonal_element;
    cin>>n>>k;

    if (k > n*n || k < n)
    {
        cout<<"Impossible"<<endl;
    }
    else
    {
        diagonal_element = floor(k/(double)n);
        remaining = k%n;   
    }

    int diagonal[n+3];

    for (int i=1; i<=n; i++)
    {
        if (remaining)
        {
            diagonal[i] = diagonal_element+1;
            remaining--;
        }
        else
        {
            diagonal[i] = diagonal_element;
        }
    }

    // for (int i=1; i<=n; i++)
    // {
    //     cout<<diagonal[i]<<' ';
    // }
    // cout<<endl;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (i == j)
            {
                cout<<diagonal[i]<<' ';
            }
            else
            {
                if (j != diagonal[i])
                {
                    cout<<j<<' ';
                }
                else
                {
                    cout<<i<<' ';
                }
                
            }
        }
        cout<<endl;
    }
}