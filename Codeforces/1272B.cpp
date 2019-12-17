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

        map <char, int> count;
        count['L'] = 0;
        count['R'] = 0;
        count['U'] = 0;
        count['D'] = 0;

        for (int i=0; i<s.length(); i++)
        {
            count[s[i]]++;
        }
        int minL = min(count['L'], count['R']);
        int minU = min(count['U'], count['D']);

        if (min(minL, minU) == 0)
        {
            if (minL == 0)
            {
                if (minU == 0)
                {
                    cout<<0<<endl;
                }
                else
                {
                    cout<<2<<endl<<"UD"<<endl;
                }
            }
            else
            {
                if (minL == 0)
                {
                    cout<<0<<endl;
                }
                else
                {
                    cout<<2<<endl<<"LR"<<endl;
                }
                
            }
        }
        else
        {
            cout<<2*(minL+minU)<<endl;
            for (int i=0; i<minL; i++)
            {
                cout<<"L";
            }
            for (int i=0; i<minU; i++)
            {
                cout<<"U";
            }
            for (int i=0; i<minL; i++)
            {
                cout<<"R";
            }
            for (int i=0; i<minU; i++)
            {
                cout<<"D";
            }
            cout<<endl;
        }
    }
}