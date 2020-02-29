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
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        map < pair<int, int>, int> pos;

        pos[{0,0}] = 0;
        int x=0;
        int y=0;

        pair <int, int> ans;
        int ansLength = INT_MAX;

        FOR(i,0,n)
        {
            if (s[i] == 'L')
                x--;
            else if (s[i] == 'R')
                x++;
            else if (s[i] == 'U')
                y++;
            else
                y--;
            
            if (pos.find(mp(x,y)) == pos.end())
            {
                pos[mp(x,y)] = i+1;
            }
            else
            {
                pair <int, int> tempAns;
                tempAns = mp(pos[mp(x,y)]+1, i+1);
                int tempAnsLength = tempAns.second - tempAns.first + 1;
                pos[mp(x,y)] = i+1;
                if (tempAnsLength < ansLength)
                {
                    ansLength = tempAnsLength;
                    ans = tempAns;
                }
            }
        }
        if (ansLength != INT_MAX)
        {
            cout<<ans.first<<" "<<ans.second<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
