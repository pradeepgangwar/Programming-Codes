#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

#define MAX 200006

int main()
{
    FAST_IO;

    ll t;
    cin>>t;

    while(t--)
    {
        ll n,x;
        cin>>n>>x;

        string s;
        cin>>s;

        ll count_one=0, count_zero=0;
        FOR(i,0,s.length())
        {
            if (s[i] == '0')
                count_zero++;
            else
                count_one++;
        }

        bool infinite = false;
        if (count_one == count_zero)
        {
            if (x == 0)
            {
                infinite = true;
            }
            else
            {
                ll zero=0, one=0;
                FOR(i,0,s.length())
                {
                    if (s[i] == '0')
                        zero++;
                    else
                        one++;
                    
                    if (zero-one == x)
                    {
                        infinite = true;
                        break;
                    }
                }
            }
            if (infinite)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
        else
        {
            ll ans=0;

            ll zero=0, one=0;
            ll difference = count_zero-count_one;
            
            FOR(i,0,s.length())
            {
                if (s[i] == '0')
                    zero++;
                else
                    one++;
                
                if ( (x-(zero-one))%difference == 0 && (x-(zero-one))/difference>=0)
                    ans++;
            }

            if (x == 0)
                ans++;

            cout<<ans<<endl;
        }
    }
}