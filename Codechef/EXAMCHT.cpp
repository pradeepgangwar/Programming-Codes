#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

ll divisors(ll n) 
{ 
    ll ans = 0;
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            if (n/i == i) 
                ans++;
  
            else
                ans+=2;
        } 
    }
    return ans;
} 

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        int a,b;
        cin>>a>>b;
        long long n = abs(b-a);
        cout<<divisors(n)<<endl;
    }
}