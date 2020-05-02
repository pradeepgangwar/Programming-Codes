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

    ll t, i=1;
    cin>>t;

    while(t--)
    {
        string str;
        cin>>str;

        vector <char> ans;

        ll len = str.length();
        ll prev, curr, depth = 0;

        curr = str[0] - '0';
        FOR (i,0,curr)
        {
            ans.pb('(');
            depth++;
        }
        ans.pb(str[0]);
        prev = curr;

        // cout<<"curr "<<curr<<" prev "<<prev<<endl;
        // for (auto x: ans)
        // {
        //     cout<<x;
        // }
        // cout<<endl;

        FOR (i,1,len)
        {
            curr = str[i] - '0';
            if (curr > prev)
            {
                FOR (i,0,curr-prev)
                {
                    ans.pb('(');
                    depth++;
                }
                ans.pb(str[i]);
                prev = curr;
            }
            else if (curr == prev)
            {
                ans.pb(str[i]);
                prev = curr;
            }
            else
            {
                FOR (i,0,prev-curr)
                {
                    ans.pb(')');
                    depth--;
                }
                ans.pb(str[i]);
                prev = curr;
            }
            
            // cout<<"curr "<<curr<<" prev "<<prev<<endl;
            // for (auto x: ans)
            // {
            //     cout<<x;
            // }
            // cout<<endl;
        }

        while (depth)
        {
            ans.pb(')');
            depth--;
        }

        cout<<"Case #"<<i<<": ";
        i++;
        for (auto x: ans)
        {
            cout<<x;
        }
        cout<<endl;
    }
}
