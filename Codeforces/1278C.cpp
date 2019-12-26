#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

int main()
{
    IOS;

    int t;
    cin>>t;

    while (t--)
    {
        ll n, strawberry=0, blueberry=0;
        cin>>n;

        ll jar[2*n+2], next[2*n+2];
        for (int i=0; i<2*n; i++)
        {
            cin>>jar[i];
            
            if (jar[i] == 1)
            {
                strawberry++;
            }
            else
            {
                blueberry++;
            }
        }

        ll difference = strawberry - blueberry;

        if (difference  == 0)
        {
            cout<<0<<endl;
        }
        else
        {
            map <ll, ll> m_right, m_left;
            int diff_l = 0, diff_r = 0;

            for (int i=n; i<2*n; i++)
            {
                if (jar[i] == 1)
                {
                    diff_r++;
                }
                else
                {
                    diff_r--;
                }

                if (m_right.find(diff_r) == m_right.end())
                {
                    m_right[diff_r] = i;
                }
            }

            for (int i=n-1; i>=0; i--)
            {
                if (jar[i] == 1)
                {
                    diff_l++;
                }
                else
                {
                    diff_l--;
                }
                m_left[i] = diff_l;
            }

            ll answer = INT_MAX;
            m_left[n] = 0;

            for (int i=n; i>=0; i--)
            {
                ll req = difference - m_left[i];

                if (req == 0)
                {
                    answer = min(answer, n - (i));
                }
                else
                {
                    if (m_right.find(req) != m_right.end())
                    {
                        answer = min(answer, m_right[req]-i+1);
                    }   
                }
            }

            cout<<answer<<endl;
        }
    }
}