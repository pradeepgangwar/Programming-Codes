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

    ll q,x;
    cin>>q>>x;

    unordered_map <ll,int> m;

    ll ans=0;
    while(q--)
    {
        ll a;
        cin>>a;

        m[a%x]++;
        while(m[ans%x])
        {
            m[ans%x]--;
            ans++;
        }
        cout<<ans<<endl;
    }
}