#include <bits/stdc++.h>
using namespace std;
    
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair
    
ll prime[1000010];
void sieve()
{
    for(ll i=2; i*i<=1000000; i++)
    {
        if(prime[i] == 0)
        {
            for(ll j=i*i; j<=1000000; j+=i)
            {
                prime[j] = 1;
            }
        }
    }
}
    
ll power(ll x, ll y) 
{ 
    ll res = 1;
    
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x); 
    
        y = y>>1;
        x = (x*x);   
    }
    return res; 
} 
    
int main()
{
    FAST_IO;
    
    sieve();
    
    int t;
    cin>>t;
    
    while (t--)
    {
        ll n, n1;
        cin>>n;
        n1 = n;
    
        unordered_map <ll, ll> cnt;
        ll count = 0;
        for(ll i=2; i*i <= n1; i++)
        {
            if(prime[i] == 0)
            {
                ll cur = 1;
                while(n1 % i == 0)
                {
                    cnt[i]++;
                    count++;
                    cur = cur * i;
                    n1 = n1 / i;
                }
            }
        }
        if (n1 != 1)
        {
            cnt[n1]++;
            count++;
        }
    
        ll a=1,b=1,c=1;
    
        if (count < 3)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            if (cnt.size() == 1)
            {
                if (count < 6)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
                else
                {
                    auto it = cnt.begin();
                    cout<<"YES"<<endl;
                    cout<<it->first<<" "<<power(it->first, 2)<<" "<<power(it->first, count-3)<<endl;
                    continue;
                }
            }
            else if (cnt.size() == 2)
            {
                if (count < 4)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
                else
                {
                    auto it=cnt.begin();
                    auto it_t = it++;
                    cout<<"YES"<<endl;
                    cout<<it->first<<" "<<it_t->first<<" "<<power(it->first, it->second-1)*power(it_t->first, it_t->second-1)<<endl;
                }
            }
            else
            {
                cout<<"YES"<<endl;
                auto it = cnt.begin();
                a = it->first;
                it->second = it->second - 1;
                it++;
                b = it->first;
                it->second = it->second - 1;
                for(auto it_t: cnt)
                {
                    c = c*power(it_t.first, it_t.second);
                }
                cout<<a<<' '<<b<<' '<<c<<endl;
            }   
        }
    }
}