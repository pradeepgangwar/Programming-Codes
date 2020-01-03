#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

vector <ll> find_factors(ll x) 
{ 
    vector <ll> factors;
    for (ll i=1; i<=sqrt(x); i++) 
    { 
        if (x%i == 0) 
        { 
            if (x/i == i) 
                factors.push_back(i);
  
            else
            {
                factors.push_back(i);
                factors.push_back(x/i); 
            }
        } 
    }
    return factors;
} 

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll a,m;
        vector <ll> answer;
        vector <ll> m_factors;
        vector <ll> x;

        cin>>a>>m;

        m_factors = find_factors(m);
        int length = m_factors.size();

        for (ll i=0; i<length; i++)
        {
            if ((m_factors[i]-1) % a == 0)
            {
                x.push_back((m_factors[i]-1)/a);
            }
        }
        
        length = x.size();

        for (int i=0; i<length; i++)
        {
            if (x[i] == 0)
            {
                continue;
            }
            ll temp = a*x[i] + 1;
            if (m%temp == 0)
            {
                ll n = m/temp;
                n = n*x[i];
                answer.push_back(n);
            }
        }

        length = answer.size();
        sort(answer.begin(), answer.end());
        cout<<length<<endl;
        for (ll i=0; i<length; i++)
        {
            cout<<answer[i]<<" ";
        }
        cout<<endl;
    }
}