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
    string s;
    cin>>s;

    int q;
    cin>>q;

    string front;
    string back;

    bool rev = true;

    while (q--)
    {
        int x;
        cin>>x;

        if (x == 1)
        {
            rev = !(rev);
        }
        else
        {
            int y;
            char c;
            cin>>y>>c;
            if (y == 1)
            {
                if (rev)
                    front += c;
                else
                    back += c;
            }
            else
            {
                if (rev)
                    back += c;
                else
                    front += c;
            }
        }
    }
    reverse(front.begin(), front.end());
    string ans = front+s+back;
    if (rev)
    {
        cout<<ans<<endl;
    }
    else
    {
        reverse(ans.begin(), ans.end());
        cout<<ans<<endl;
    }
}
