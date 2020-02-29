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
    int max = INT_MIN;
    map <string, int> m;
    FOR(i,0,n)
    {
        cin>>s;
        m[s]++;

        if (m[s] > max)
        {
            max = m[s];
        }
    }

    // sort(m.begin(), m.end());

    for (auto it=m.begin(); it!=m.end(); it++)
    {
        if (it->second == max)
        {
            cout<<it->first<<endl;
        }
    }
}
