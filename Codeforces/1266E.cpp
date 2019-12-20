#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{

    IOS;

    long long n;
    cin>>n;

    long long a[n+3], count=0, p[200006]={0};

    for (int i=1; i<=n; i++)
    {
        cin>>a[i];
        count += a[i];
    }

    long long q;
    cin>>q;

    map < pair<long long, long long>, long long> m;

    while(q--)
    {
        long long s,t,u;

        cin>>s>>t>>u;
        
        if (m.find(make_pair(s,t)) != m.end())
        {
            long long index = m[make_pair(s,t)];
            p[index]--;
            if (p[index] < a[index])
            {
                count++;
            }
            m.erase(make_pair(s,t));
            if (u != 0)
            {
                m[make_pair(s,t)] = u;
                p[u]++;
                if (p[u] <= a[u])
                {
                    count--;
                }
            }
            // for (int i=0; i<=n; i++)
            // {
            //     cout<<p[i]<<" ";
            // }
            // cout<<endl;
            cout<<count<<endl;
        }
        else
        {
            if (u != 0)
            {
                m[make_pair(s,t)] = u;
                p[u]++;
                if (p[u] <= a[u])
                {
                    count--;
                }
            }
            // for (int i=0; i<=n; i++)
            // {
            //     cout<<p[i]<<" ";
            // }
            // cout<<endl;
            cout<<count<<endl;
        }
    }
}