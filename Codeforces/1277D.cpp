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
        ll n;
        cin>>n;

        ll count_00=0, count_01=0, count_10=0, count_11=0;
        string s[n];

        set <string> s_00, s_11, s_01, s_10;

        for (int i=0; i<n; i++)
        {
            cin>>s[i];
            int l = s[i].length();

            if (s[i][0] == '0' && s[i][l-1] == '0')
            {
                count_00++;
                s_00.insert(s[i]);
            }
            else if (s[i][0] == '1' && s[i][l-1] == '1')
            {
                count_11++;
                s_11.insert(s[i]);
            }
            else if (s[i][0] == '0' && s[i][l-1] == '1')
            {
                count_01++;
                s_01.insert(s[i]);
            }
            else
            {
                count_10++;
                s_10.insert(s[i]);
            }
        }

        if (count_00 > 0 && count_11 == 0 && count_01 == 0 && count_10 == 0)
        {
            cout<<0<<endl;
        }
        else if (count_11 > 0 && count_00 == 0 && count_10 == 0 && count_01 == 0)
        {
            cout<<0<<endl;
        }
        else if (count_00 > 0 && count_11 > 0 && count_01 == 0 && count_10 == 0)
        {
            cout<<-1<<endl;
        }
        else
        {
            if (count_10 == count_01 || count_10 == count_01 + 1 || count_10 + 1 == count_01)
            {
                cout<<0<<endl;
            }
            else if (count_10 > count_01)
            {
                int reversals = max(0, int((count_10-count_01)/2));
                cout<<reversals<<endl;
                for (int i=0; i<n; i++)
                {
                    int len = s[i].length();
                    if (s[i][0] == '1' && s[i][len-1] == '0')
                    {
                        reverse(s[i].begin(), s[i].end());
                        if (s_01.find(s[i]) == s_01.end())
                        {
                            cout<<i+1<<" ";
                            reversals--;
                        }
                    }
                    if (reversals == 0)
                    {
                        cout<<endl;
                        break;
                    }
                }
            }
            else if (count_10 < count_01)
            {
                int reversals = max(0, int((count_01-count_10)/2));
                cout<<reversals<<endl;
                for (int i=0; i<n; i++)
                {
                    int len = s[i].length();
                    if (s[i][0] == '0' && s[i][len-1] == '1')
                    {
                        reverse(s[i].begin(), s[i].end());
                        if (s_10.find(s[i]) == s_10.end())
                        {
                            cout<<i+1<<" ";
                            reversals--;
                        }
                    }
                    if (reversals == 0)
                    {
                        cout<<endl;
                        break;
                    }
                }
            }
        }
    }
}