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
    int t;
    cin>>t;

    while(t--)
    {
	    int n;
        cin>>n;

        int a[300009];
        FOR (i,0,n)
        {
            cin>>a[i];
        }

        int inc = -1;

        FOR (i,0,n)
        {
            if (a[i] < i)
            {
                break;
            }
            inc = i;
        }

        int dec = n;

        FOR_REV (i,n-1,0)
        {
            if (a[i] < n-1-i)
            {
                break;
            }
            dec = i;
        }

        if (dec <= inc)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}