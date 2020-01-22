#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

int last(int n)
{
    return n%10;
}

int first(int n)
{
    int a = log10(n);

    int t = pow(10, a);

    return n/t;
}

int main()
{
	int n;
    cin>>n;

    int cnt[11][11]= {0};

    FOR(i,1,n+1)
    {
        int f = first(i);
        int l = last(i);

        cnt[f][l]++;
    }

    ll ans=0;

    FOR(i,1,10)
    {
        FOR(j,1,10)
        {
            ans += cnt[i][j]*cnt[j][i];
        }
    }

    cout<<ans<<endl;
}