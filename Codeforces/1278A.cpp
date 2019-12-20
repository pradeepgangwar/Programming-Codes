#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        string s,h;
        cin>>s;
        cin>>h;
        
        int s_len = s.length();
        int h_len = h.length();
        int s_char[30] = {0};
        bool answer = true;

        for (int i=0; i<s_len; i++)
        {
            s_char[s[i] - 97]++;
        }

        if (h_len >= s_len)
        {
            for (int i=0; i<(h_len-s_len+1); i++)
            {
                int h_char[30] = {0};
                for (int j=i; j<i+s_len; j++)
                {
                    h_char[h[j] - 97]++;
                }
                // cout<<"i "<<i<<endl;
                // for (int k=0; k<26; k++)
                // {
                //     cout<<h_char[k]<<" ";
                // }
                // cout<<endl;

                answer = true;
                for (int k=0; k<30; k++)
                {
                    if (h_char[k] != s_char[k])
                    {
                        answer = false;
                    }
                }
                if (answer)
                {
                    break;
                }
            }

            if (answer)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}