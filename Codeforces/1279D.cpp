#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

ll extended_eucledian(ll a, ll b, ll *x, ll *y)
{
    // Base Case  
    if (a == 0)  
    {  
        *x = 0;  
        *y = 1;  
        return b;  
    }  
  
    ll x1, y1; // To store results of recursive call  
    ll gcd = extended_eucledian(b%a, a, &x1, &y1);  
  
    // Update x and y using results of  
    // recursive call  
    *x = y1 - (b/a) * x1;  
    *y = x1;  
  
    return gcd;  
}

ll modInverse(ll a, ll m)
{
    ll x, y;
    ll gcd = extended_eucledian(a, m, &x, &y);

    if (gcd != 1)
    {
        return 0;
    }
    else
    {
        x = (x % m + m) % m;
        return x;
    }
    
}

int main()
{
    ll n;
    cin>>n;

    vector <ll> child(n+4, 0);
    vector <ll> present(1000008, 0);

    vector <vector <ll> > inputs;

    for (int i=0; i<n; i++)
    {
        ll k;
        cin>>k;
        child[i] = k;
        vector <ll> temp;
        ll a;
        for (int j=0; j<k; j++)
        {
            cin>>a;
            present[a]++;
            temp.push_back(a);
        }
        inputs.push_back(temp);
        temp.clear();
    }

    ll mod = 998244353;
    ll answer = 0;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<inputs[i].size(); j++)
        {
            answer += modInverse(child[i], mod)*present[inputs[i][j]];
            answer = answer%mod;
        }
    }

    ll denominator = (n*n)%mod;
    answer = answer * modInverse(denominator, mod);
    answer = answer % mod;

    cout<<answer<<endl;
}