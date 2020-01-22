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

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        pair <int, int> pnts[1003];
        int a,b;
        FOR(i,0,n)
        {
            cin>>a>>b;
            pnts[i] = mp(a,b);
        }

        sort(pnts, pnts+n);

        int x=0, y=0;
        int count = 0;
        string ans;

        for (int i=0; i<n;)
        {
            if (pnts[i].first == x)
            {
                if (pnts[i].second == y)
                {
                    count++;
                    i++;
                }
                else
                {
                    if (pnts[i].second < y)
                    {
                        if (count < n)
                        {
                            cout<<"NO"<<endl;
                            break;
                        }
                        else
                        {
                            cout<<"YES"<<endl;
                            cout<<ans<<endl;
                            break;
                        }
                    }
                    else
                    {
                        FOR(j,0,pnts[i].second-y)
                        {
                            ans+='U';
                        }
                        y = pnts[i].second;
                    }
                }
            }
            else
            {
                if (pnts[i].first < x)
                {
                    if (count < n)
                    {
                        cout<<"NO"<<endl;
                        break;
                    }
                    else
                    {
                        cout<<"YES"<<endl;
                        cout<<ans<<endl;
                        break;
                    }
                }
                else
                {
                    if (pnts[i].first > x)
                    {
                        FOR(j,0,pnts[i].first-x)
                        {
                            ans+='R';
                        }
                        x = pnts[i].first;
                    }
                }
            }
        }

        if (count >= n)
        {
            cout<<"YES"<<endl;
            cout<<ans<<endl;
        }
    }
}