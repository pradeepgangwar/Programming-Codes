#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

ll count_digits(ll a)
{
    ll digits = 0;
    while(a>0)
    {
        a = a/10;
        digits++;
    }
    return digits;
}

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        ll length = s.length();
        ll count = 1;
        char a = s[0];

        ll new_length = 0;

        for (ll i=1; i<length; i++)
        {
            if (s[i] == a)
            {
                count++;
            }
            else
            {
                a = s[i];
                ll digits = count_digits(count)+1;
                new_length += digits;
                count = 1;
            }
        }
        ll digits = count_digits(count)+1;
        new_length += digits;

        if (new_length < length)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}