#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

ll primeFactors(ll n)  
{
    ll count = 0;
    while (n % 2 == 0)  
    {  
        count++;
        n = n/2;  
    }  
  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            count++;
            n = n/i;  
        }  
    }  
   
    if (n > 2)  
        count++;
    
    return count;
}  

int main()
{
    FAST_IO;

    ll t;
    cin>>t;

    while (t--)
    {
        ll x,k;
        cin>>x>>k;

        ll divisors = primeFactors(x);

        if (divisors >= k)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}
