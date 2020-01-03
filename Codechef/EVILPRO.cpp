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

    ll n;
    cin>>n;

    while (n--)
    {
        string s;
        cin>>s;

        int l = s.length();
        int identical = 0;
        int ans = 0;

        for (int i=0; i<l; i++)
        {
            cout<<s[i]<<" ";
        }
        cout<<endl;

        for (int i=0; i<l-1; i++)
        {
            if (s[i] == s[i+1])
            {
                identical++;
            }
        }

        ans = l*(l+1);
        ans = ans*identical;
        ans = ans/2;
        // cout<<ans<<endl;

        for (int i=1; i<l; i++)
        {
            if(s[i] == s[i-1])
            {
                // cout<<s[i]<<" ans ";
                ans = ans - (l-i);
                // cout<<ans<<endl;
            }
                
            else
            {
                // cout<<s[i]<<" ans ";
                ans = ans + (l-i);
                // cout<<ans<<endl;
            }
        }
        for (int i=0; i<l-1; i++)
        {
            if(s[i] == s[i+1])
            {
                // cout<<s[i]<<" ans ";
                ans = ans - (i+1);
                // cout<<ans<<endl;
            }
                
            else
            {
                // cout<<s[i]<<" ans ";
                ans = ans + (i+1);
                // cout<<ans<<endl;
            }
        }

        cout<<ans<<endl;
    }
}