#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n,s;
        cin>>n>>s;

        ll a[n], sum=0;

        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            sum += a[i];
        }

        if (sum <= s)
        {
            cout<<0<<endl;
        }
        else
        {
            ll localmax = a[0], index = 0, local_sum=0, answer=0;

            for (int i=0; i<n; i++)
            {
                local_sum += a[i];
                if (a[i] > localmax)
                {
                    localmax = a[i];
                    index = i;
                }
                if (local_sum > s)
                {
                    local_sum -= a[index];
                    if (local_sum + a[i+1] <= s)
                    {
                        answer = index+1;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
            }

            cout<<answer<<endl;
        }
    }
}