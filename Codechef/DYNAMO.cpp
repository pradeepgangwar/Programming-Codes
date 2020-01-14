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

    ll t;
    cin>>t;

    while (t--)
    {
        ll n;
        cin>>n;

        ll a,b,d,s, answer;
        ll temp;
        temp = pow(10,n);
        s = temp*2;

        cin>>a;

        s = s+a;
        cout<<s<<endl;
        cout<<flush;

        cin>>b;
        cout<<temp-b<<endl;
        cout<<flush;

        cin>>d;
        cout<<temp-d<<endl;
        cout<<flush;
        
        cin>>answer;
        if (answer == -1)
            return 0;

    }
}