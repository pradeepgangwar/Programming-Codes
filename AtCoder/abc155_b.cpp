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
    int n;
    cin>>n;

    int a[1005];
    FOR(i,0,n)
    {
        cin>>a[i];
    }

    bool ans = true;
    FOR(i,0,n)
    {
        if (a[i]%2 == 0 && (a[i]%3 !=0 && a[i]%5 != 0))
        {
            ans = false;
            break;
        }
    }

    if (ans)
    {
        cout<<"APPROVED"<<endl;
    }
    else
    {
        cout<<"DENIED"<<endl;
    }
}
