#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        vector <int> indexes;

        for (int i=0; i<s.length();)
        {
            if (s[i] == 'o')
            {
                i++;
                if(s[i] == 'n')
                {
                    i++;
                    if(s[i] == 'e')
                    {
                        indexes.push_back(i);
                        i++;
                    }
                }
            }
            else if (s[i] == 't')
            {
                i++;
                if(s[i] == 'w')
                {
                    i++;
                    if(s[i] == 'o' && s[i+1] == 'n' && s[i+2] == 'e')
                    {
                        indexes.push_back(i+1);
                        i+=3;
                    }
                    else if(s[i] == 'o')
                    {
                        indexes.push_back(i);
                        i++;
                    }
                }
            }
            else
            {
                i++;
            }
            
        }
        cout<<indexes.size()<<endl;
        for (int i=0; i<indexes.size(); i++)
        {
            cout<<indexes[i]<<" ";
        }
        cout<<endl;
    }
}