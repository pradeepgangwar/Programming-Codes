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
    int n;
    cin>>n;

    string s;
    cin>>s;

    int last_seen = -1;
    string col;

    vector <int> ans; 

    FOR(i,0,n)
    {
        int x = s[i] - 'a';

        if (x >= last_seen)
        {
            last_seen = x;
            col += to_string(1);
            col += " ";
        }
        else
        {
            bool found = false;
            for (int j=0; j<ans.size(); j++)
            {
                if (x < ans[j])
                {
                    continue;
                }
                else
                {
                    found = true;
                    ans[j] = x;
                    col += to_string(j+2);
                    col += " ";
                }
            }
            if (!found)
            {
                ans.pb(x);
                col += to_string(ans.size()+1);
                col += " ";
            }
        }
    }

    cout<<ans.size()+1<<endl;
    cout<<col<<endl;
}
