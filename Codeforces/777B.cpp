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

    int n;
    cin>>n;

    string a,b;
    cin>>a>>b;

    unordered_map <int, int> s,m, m_one;

    FOR(i,0,a.length())
    {
        s[a[i]-48]++;
    }
    FOR(i,0,b.length())
    {
        m[b[i]-48]++;
        m_one[b[i]-48]++;
    }

    int count = 0;
    FOR(i,0,a.length())
    {
        int x = a[i]-48;
        for (int j=x; j<=9; j++)
        {
            if (m[j])
            {
                count++;
                m[j]--;
                break;
            }
        }
    }
    cout<<n-count<<endl;
    count = 0;
    FOR(i,0,a.length())
    {
        int x = a[i]-48;
        for (int j=x+1; j<=9; j++)
        {
            if (m_one[j])
            {
                count++;
                m_one[j]--;
                break;
            }
        }
    }
    cout<<count<<endl;
}